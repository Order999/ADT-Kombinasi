#include "Stack.h"

void push(Riwayat *riwayat, Pasien *pasien){
	if(pasien->first == Nil){
		return;
	}
	
	Riwayat temp;
	temp.top = pasien->first;
	dequeue(pasien);
	temp.top->next = riwayat->top;
	riwayat->top = temp.top;
	
}


