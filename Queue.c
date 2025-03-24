#include "Queue.h"

// File body untuk logika struktur data queue

// Prosedur untuk menginisialisasi Linked List dengan Nil saat pertama kali dideklarasikan
void init(address *first){
	*first = Nil;
}

// Function untuk mengecek apakah antrian Poli sudah penuh
bool isFull(Pasien pasien){
	return (queueLength(pasien) == MAX);
}

// Function untuk mengecek apakah antrian Pasien kosong
bool isEmpty(Pasien pasien){
	return (first(pasien) == Nil);
}

// Function untuk mengecek jumlah antrian Pasien
int queueLength(Pasien pasien){
	int length = 0;
	while(first(pasien) != Nil){
		length ++;
		first(pasien) = next(first(pasien));
	}
	return length;
}

// Prosedur untuk memasukkan antrian Pasien ke paling belakang
void queue(Pasien *pasien, char nama[], int choice, int *antrian){
	if (isFull(*pasien)){
        printf("Poli %s sedang penuh\n", getPoli(choice));
        return;
    }
	
    insertLast(&(first(*pasien)), nama, choice, *antrian);
    printf("Pasien %s telah didaftarkan ke Poli %s dengan nomor antrian %d\n", nama, getPoli(choice), *antrian);
    (*antrian)++;
}

// Prosedut untuk memproses antrian dari paling depan
void dequeue(Pasien *pasien){
	if(isEmpty(*pasien)){
		printf("Poli kosong");
		return;
	}
	pasien->first = pasien->first->next;
}

// Prosedur untuk menginisialisasi Poli
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

// Function untuk mendapatkan nama poli berdasarkan id Poli
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

