#include "Queue.h"

// File body untuk logika struktur data queue

// Prosedur untuk menginisialisasi Teller->first dengan Nil
void init(address *first){
	*first = Nil;
}

// Function untuk mengecek apakah antrian teller sudah penuh
bool isFull(Pasien pasien){
	return (queueLength(pasien) == MAX);
}

// Function untuk mengecek apakah antrian teller kosong
bool isEmpty(Pasien pasien){
	return (first(pasien) == Nil);
}

// Function untuk mengecek jumlah antrian teller
int queueLength(Pasien pasien){
	int length = 0;
	while(first(pasien) != Nil){
		length ++;
		first(pasien) = next(first(pasien));
	}
	return length;
}

// Prosedur untuk memasukkan antrian ke paling belakang
void queue(Pasien *pasien, char nama[], int choice, int antrian){
	if (isFull(*pasien)){
        printf("Poli %s sedang penuh\n", getPoli(choice));
        return;
    }
	
    insertLast(&(first(*pasien)), nama, choice, antrian);
    printf("Pasien %s telah didaftarkan ke Poli %s dengan nomor antrian %d\n", nama, getPoli(choice), antrian);
}

// Prosedut untuk memproses antrian dari paling depan
void dequeue(Pasien *pasien){
	if(isEmpty(*pasien)){
		printf("Poli kosong");
		return;
	}
	pasien->first = pasien->first->next;
}

void initPoli(Poli **first, int id, char namaPoli[]){
	Poli *P = (Poli*) malloc(sizeof(Poli));
	P->id = id;
	strcpy(P->poli, namaPoli);
	P->next = Nil;
    
    if(*first == Nil){
    	*first = P;
	}else{
		Poli *temp = *first;
		while(next(temp) != Nil){
			temp = next(temp);
		}
		next(temp) = P;
	}
}

char* getPoli(int choice){
    Poli *temp = poliFirst;
    while(temp != NULL){
        if (choice == temp->id) {
            return temp->poli;
        }
        temp = temp->next;
    }
    return "Poli Tidak Ditemukan"; // Mengembalikan pesan jika poli tidak ditemukan
}

