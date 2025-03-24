#include "LinkedList.h"

void insertLast(address *First, char nama[], int choice, int antrian){
	address P = (address) malloc(sizeof(ElmtList));
	strcpy(nama(P), nama);
	choice(P) = choice;
	antrian(P) = antrian;
    next(P) = Nil;
    
    if(*First == Nil){
    	*First = P;
	}else{
		address temp = *First;
		while(next(temp) != Nil){
			temp = next(temp);
		}
		next(temp) = P;
	}
}

// Prosedur untuk menghapus List Pasien dan Riwayat
void deleteList(address *First){
	address temp;
	if(*First == Nil){
		printf("List kosong\n");
		return;
	}
	
	while(*First != Nil){
		temp = *First;
		*First = next(*First);
		free(temp);
	}
	printf("List kosong\n");
}

// Prosedur untuk menghapus List Poli
void deleteListPoli(Poli **poliFirst){
	Poli *temp;
	if(*poliFirst == Nil){
		return;
	}
	
	while(*poliFirst != Nil){
		temp = *poliFirst;
		*poliFirst = next(*poliFirst);
		free(temp);
	}
}
