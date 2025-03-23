#ifndef header_h
#define header_h
#include "LinkedList.h"
#define MAX 5

// File header untuk modul logika struktur data queue

void init(address *first);
bool isFull(Pasien pasien);
bool isEmpty(Pasien pasien);
int queueLength(Pasien pasien);
void queue(Pasien *pasien, char nama[], int choice, int antrian);
void dequeue(Pasien *pasien);
void initPoli(Poli **first, int id, char namaPoli[]);
char* getPoli(int choice);

#endif


