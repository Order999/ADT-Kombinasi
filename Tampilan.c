#include "Tampilan.h"

void subMenu1(Pasien *PoliUmum, Pasien *PoliAnak, int *antrianPoliUmum, int *antrianPoliAnak){
	int pilihan;
	char nama[50];
	
	do{
		printf("1. Daftar Poli Umum\n");
		printf("2. Daftar Poli Anak\n");
		printf("3. Kembali\n");
		printf("Pilihan anda : ");
		scanf("%d",&pilihan);
		
		switch(pilihan){
	    	case 1:
	    		printf("Masukkan nama: ");
	    		scanf("%s", nama);
	    		queue(PoliUmum, nama, 1, antrianPoliUmum);
	    		break;
	    	case 2:
	    		printf("Masukkan nama: ");
	    		scanf("%s", nama);
	    		queue(PoliAnak, nama, 2, antrianPoliAnak);
	    		break;
	    	case 3:
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	}while(pilihan != 3);
}
	
void subMenu2(Pasien *PoliUmum, Pasien *PoliAnak, Riwayat *poliUmum, Riwayat *poliAnak){
	int pilihan;
	do{
		printf("1. Proses Poli Umum\n");
		printf("2. Proses Poli Anak\n");
		printf("3. Kembali\n");
		printf("Pilihan anda : ");
		scanf("%d",&pilihan);
		
		switch(pilihan){
	    	case 1:
	    		if (PoliUmum->first != Nil) {
				    printf("Pasien %s dengan nomor antrian %d telah diproses\n\n",PoliUmum->first->nama, PoliUmum->first->antrian);
				}else {
					printf("Tidak ada pasien dalam antrian\n\n");
				}
	    		push(poliUmum, PoliUmum);
	    		break;
	    	case 2:
	    		if (PoliUmum->first != Nil) {
				    printf("Pasien %s dengan nomor antrian %d telah diproses\n\n",PoliAnak->first->nama, PoliAnak->first->antrian);
				}else {
					printf("Tidak ada pasien dalam antrian\n\n");
				}
	    		push(poliAnak, PoliAnak);
	    		break;
	    	case 3:
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	}while(pilihan != 3);
}

void subMenu3(Pasien PoliUmum, Pasien PoliAnak){
	int pilihan;
	do{
		printf("1. Tampilkan Antrian Poli Umum\n");
		printf("2. Tampilkan Antrian Poli Anak\n");
		printf("3. Kembali\n");
		printf("Pilihan anda : ");
		scanf("%d",&pilihan);
		
		switch(pilihan){
	    	case 1:
	    		tampilkanList(PoliUmum.first);
	    		break;
	    	case 2:
	    		tampilkanList(PoliAnak.first);
	    		break;
	    	case 3:
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	}while(pilihan != 3);
}

void subMenu4(Riwayat poliUmum, Riwayat poliAnak){
	int pilihan;
	do{
		printf("1. Tampilkan Riwayat Poli Umum\n");
		printf("2. Tampilkan Riwayat Poli Anak\n");
		printf("3. Kembali\n");
		printf("Pilihan anda : ");
		scanf("%d",&pilihan);
		
		switch(pilihan){
	    	case 1:
	    		printf("==========Riwayat Poli Umum==========");
	    		printf("\n");
	    		tampilkanList(poliUmum.top);
	    		break;
	    	case 2:
	    		printf("==========Riwayat Poli Anak==========");
	    		printf("\n");
				tampilkanList(poliAnak.top);
	    		break;
	    	case 3:
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	}while(pilihan != 3);
}

void tampilkanList(address firstORtop){
	if(firstORtop == Nil){
		printf("Kosong\n\n");
		return;
	}
	
	int nomor = 1;
	while(firstORtop != Nil){
		printf("\n%d. Nama: %s, Nomor Antrian: %d", nomor, firstORtop->nama, firstORtop->antrian);
		firstORtop = firstORtop->next;
		nomor ++;
	}
	printf("\n\n");
}
