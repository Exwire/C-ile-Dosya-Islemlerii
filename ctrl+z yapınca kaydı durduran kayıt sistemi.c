#include<stdio.h>

int main(){
	
	int no;
	char isim[50];
	char bolum[50];
	
	FILE *ptr;
	
	if((ptr = fopen("dosya.txt","w")) == NULL)
	{ 
		printf("Dosya acýlamadý.\n");
	}
	else
	{
		printf("Ogrenci numarasi,ismini ve bolumunu girin.\n");
		scanf("%d",&no);
		scanf("%s",isim);
		scanf("%s",bolum);
		
		while(!feof(stdin))
		{
			fprintf(ptr,"%d %s %s \n",no,isim,bolum);
			printf(" Ogrenci numarasý,ismini ve bolumunu girin.\n");
			scanf("%d",&no);
			scanf("%s",isim);
			scanf("%s",bolum);

		}
		
		fclose(ptr);
	}

	return 0;
}
