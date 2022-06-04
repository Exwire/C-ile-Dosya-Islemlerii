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
