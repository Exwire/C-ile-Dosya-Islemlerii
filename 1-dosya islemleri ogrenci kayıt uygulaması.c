#include<stdio.h>
#include<stdlib.h>

int no;
char ad[20];
char bolum[20];

FILE * dosya;

void ekle(){
	
	system("cls");
	
	if((dosya = fopen("ogrenci.txt","a")) == NULL)
		printf("Islem basarisiz.");
	else
	{
		printf("Ogrenci no: ");scanf("%d",&no);
		printf("Ogrenci ad: ");scanf("%s",ad);
		printf("Ogrenci bolum: ");scanf("%s",bolum);
		
		fprintf(dosya,"%d\t%s\t%s\n",no,ad,bolum);
		fclose(dosya);
	}
	
}

void yazdir(){
	
	system("cls");
	
	if((dosya = fopen("ogrenci.txt","r")) == NULL)
		printf("Islem basarisiz.");
	else
	{
		printf("Ogrenci no\t\tOgrenci ad\t\tOgrenci bolum\n");
		while(!feof(dosya))
		{
			fscanf(dosya,"%d\t\t%s\t\t%s\n",&no,ad,bolum);
			printf("%d\t%s\t%s\n",no,ad,bolum);
		}
		fclose(dosya);
	}
}

void ara(){

	char ara[20];
	system("cls");
	
	if((dosya = fopen("ogrenci.txt","r")) == NULL)
		printf("Islem basarisiz.");
	else
	{
		printf("Aramak istediginiz ogrencinin adini giriniz.\n");
		scanf("%s",ara);
		while(!feof(dosya))
		{
			fscanf(dosya,"%d\t\t%s\t\t%s\n",&no,ad,bolum);
			if(strcmp(ara,ad)==0)
				printf("\n\n\n%d\t%s\t%s\n\n\n",no,ad,bolum);
		}
		fclose(dosya);
	}
	
}

int main(){
	
	int secim;
	
	while(1)
	{
		printf("1 - Ogrenci kayit ekle\n");
		printf("2 - Ara\n");
		printf("3 - Yazdir\n");
		printf("0 - Cikis\n");
		printf("Seciminizi grin.\n");
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1:
				ekle();
				break;
			case 2:
				ara();
				break;
			case 3:
				yazdir();
				break;
			case 0:
				exit(0);
			default:
				printf("Hatali giris\n");
		}
	}
}
