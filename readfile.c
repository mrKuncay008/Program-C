// cobaa

// membaca file FUNGSI FILE
#include <stdlib.h>
#include <stdio.h>

void main()
{
	system("clear");
	char asu[255];
	FILE *ftpr;

	//membuka filenya hiyaaa

	if ((ftpr = fopen("C.txt","r")) == NULL)
		{
			printf("asuuu\n");
			printf("Erro: file nya gak ada!");
			printf("\n");

		//tutup klo file gk ads
		exit(1);
		}

// tampilkan isi 
// baca isi file dengan gets lalu simpan ke asuu dengan perulangan
while(fgets(asu, sizeof(asu), ftpr)){

	printf("%s", asu);
}
// tutup

fclose(ftpr);

}


