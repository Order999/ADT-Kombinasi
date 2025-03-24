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
#define first(P) (P).first
#define Nil NULL

// Definisi struct untuk  List Pasien
typedef struct tElmtlist *address;
typedef struct tElmtlist {
	char nama[50];
	int choice;
	int antrian;
	address next;
} ElmtList;

// Definisi struct untuk List Poli
typedef struct Poli{
	int id;
	char poli[10];
	struct Poli *next;
}Poli;

// Linked List Poli
Poli *poliFirst;

// Linked List Pasien
typedef struct {
	address first;
}Pasien;

// Linked List untuk Riwayat
typedef struct{
	address top;
}Riwayat;
	
void insertLast(address *First, char nama[], int choice, int antrian);
void deleteList(address *First);
void deleteListPoli(Poli **poliFirst);
#endif


