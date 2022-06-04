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
