#ifndef Linkedlist_h
#define Linkedlist_h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define nama(P) (P)->nama
#define choice(P) (P)->choice
#define antrian(P) (P)->antrian
#define next(P) (P)->next
//#define first(P) (P).first
//#define top(P) (P).top
#define Nil NULL

typedef struct tElmtlist *address;
typedef struct tElmtlist {
	char nama[50];
	int choice;
	int antrian;
	address next;
} ElmtList;

typedef struct Poli{
	int id;
	char poli[10];
	struct Poli *next;
}Poli;

Poli *poliFirst;

// Definisi struct baru, karena file LinkedList.h kemarin tidak ada struct untuk pointer ke node paling awal, hanya memakai address First.
typedef struct {
	address first;
}Pasien;

typedef struct{
	address top;
}Riwayat;
	
void insertFirst(address *First, int value);
void insertLast(address *First, char nama[], int choice, int antrian);
void insertAfter(address *First, int value);
void deleteFirst(address *First);
void deleteLast(address *First);
void deleteByValue(address *First, int value);
void printSemuaNode(address First);


#endif


