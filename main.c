#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Pasien PoliUmum, PoliAnak;
	Riwayat poliUmum, poliAnak;
	int antrianPoliUmum = 1, antrianPoliAnak = 1, pilihan;
	init(&PoliUmum); init(&PoliAnak);
	initPoli(&poliFirst, 1, "Poli Umum"); initPoli(&poliFirst, 2, "Poli Anak");
	
	do{
		printf("\n");
		printf("\n=== SISTEM ANTRIAN BANK ===\n");
	    printf("1. Daftar\n");
	    printf("2. Proses Antrian\n");
	    printf("3. Lihat Antrian\n");
	    printf("4. Lihat Riwayat\n");
	    printf("5. Keluar\n");
	    printf("Pilihan Anda: ");
	    scanf("%d",&pilihan);
	    
	    switch(pilihan){
	    	case 1:
	    		subMenu1(&PoliUmum, &PoliAnak, &antrianPoliUmum, &antrianPoliAnak);
	    		break;
	    	case 2:
	    		subMenu2(&PoliUmum, &PoliAnak, &poliUmum, &poliAnak);
	    		break;
	    	case 3:
	    		subMenu3(PoliUmum, PoliAnak);
	    		break;
	    	case 4:
	    		subMenu4(poliUmum, poliAnak);
	    		break;
	    	case 5:
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	    	
	}while(pilihan != 5);
		
	
	return 0;
}
