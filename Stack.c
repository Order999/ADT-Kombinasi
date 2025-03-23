#include "Stack.h"

void push(Riwayat *riwayat, Pasien *pasien){
	if(pasien->first == Nil){
		return;
	}
	
	Riwayat temp;
	temp.top = pasien->first;
	if (pasien->first != NULL) {
	    printf("Pasien %s dengan nomor antrian %d telah diproses\n\n", temp.top->nama, temp.top->antrian);
	}else {
		printf("Tidak ada pasien dalam antrian\n\n");
	}
	dequeue(pasien);
	temp.top->next = riwayat->top;
	riwayat->top = temp.top;
	
}


