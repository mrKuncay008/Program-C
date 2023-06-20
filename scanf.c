// mencoba scan dan pintf

#include <stdio.h>

int main()
{

// variable char
char nama_sppbu[100], daerah[100], tanggal[100], nomerpompa[100], jenisbbm[100],
	 liter[100], harga[100], total[100];

// Nama nama

printf("Nama sppbu: ");

scanf("%s", nama_sppbu);

printf("\nNama daerah ");

scanf("%s", daerah);

printf(" tanggal, jam: \n");

scanf("%s", tanggal);

printf(" nomerpompa: \n");

scanf("%s", nomerpompa);

printf(" jenis bbm: \n");

scanf("%s", jenisbbm);

printf(" berapa liter: \n");

scanf("%s", liter);

printf(" harga/liter : \n");

scanf("%s", harga);

printf(" totalharga : \n");

scanf("%s", total);

// Hasilnya cok

printf("------- PERTAMINA --------\n");
printf("\n");
printf("%s\n", nama_sppbu);
printf("%s\n", daerah);
printf("%s\n", tanggal);
printf("__________________________\n");
printf("\n");
printf(" No Pompa:   	 %s\n", nomerpompa);
printf("Jenis BBM:	 %s\n", jenisbbm);
printf("Liter	 :	 %s\n", liter);
printf("Harga/liter:	 %s\n", harga);
printf("Total  	   :	 %s\n", total);
printf("\n");

return 0;
}