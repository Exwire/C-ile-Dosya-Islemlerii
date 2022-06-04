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
