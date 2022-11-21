#include<stdio.h>
#include<stdlib.h>
#define puan1 2.25
#define puan2 2.35
#define puan3 2.05
#define puan4 2.00

int main() {

	int turkce,matematik,fen,sosyal;
	float sozelpuan,sayisalpuan,fenpuan,sosyalpuan,toplampuan;

	printf("Turkce Netinizi Giriniz: ");
	scanf_s("%d", &turkce);
	
	sozelpuan = turkce * puan1 + 50.25;
	printf("Sozel Puaniniz=%f\n",sozelpuan);

	printf("Matematik Netiniz: ");
	scanf_s("%d", &matematik);
	
	sayisalpuan = matematik * puan2 + 50.35;
	printf("Sayisal Puaniniz=%f\n", sayisalpuan);

	printf("Fen Puaniniz: ");
	scanf_s("%d", &fen);

	fenpuan = fen * puan3 + 50.05;
	
	printf("Fen Puaniniz=%f\n", fenpuan);

	printf("Sosyal Netiniz: ");
	scanf_s("%d", &sosyal);

	sosyalpuan = sosyal * puan4 + 50.00;
	printf("Sosyal Puaniniz=%f\n", sosyalpuan);

	toplampuan = sozelpuan + sayisalpuan + fenpuan + sosyalpuan;
	printf("Toplam Puan=%f", toplampuan);


	return 0;
  }