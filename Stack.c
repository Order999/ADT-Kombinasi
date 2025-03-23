#include "Stack.h"

// Prosedur yang digunakan untuk membuat node baru dengan value info sisa dari pembagian bilangan desimal dengan 2 menggunakan struktur data stack
void push(Riwayat *riwayat, Pasien pasien){
	
	Riwayat temp;
	temp.top = pasien.first;
	temp.top->next = riwayat->top;
	riwayat->top = temp.top;

}


