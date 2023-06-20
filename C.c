 #include <stdio.h>

int main()
{
     int sisi, luas;

     printf("==================================\n");
     printf("==== Program Command mr kuncay ====\n");
     printf("==================================\n");
     printf("-----------------------------------\n");
     printf("");


     printf("\nRumus untuk menghitung Luas Persegi = Sisi x Sisi");
     printf("\n\nMasukkan panjang Sisi Persegi : ");
     scanf("%d",&sisi);

     luas = sisi*sisi;

     printf("\nLuas Persegi = %d", luas);

     return 0;
}