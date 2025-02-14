Bahasa Pemograman C
-----------------------------------------------------------------------------------------

 - Oprasi FILE
	Penggunaan operasi FILE dalam sebuah program sangat dibutuhkan dalam pembuatan program yang sesungguhnya. Kita membutuhkan file sebagai tempat penampung data-data selama operasi program. Jika kamu menggunakan variabel biasa, data yang biasanya diolah program hanya akan tersimpan sementara dalam memory dan akan hilang ketika program close. Berbeda dengan memory, penyimpanan data berbasis file akan tersimpan terus walaupun program telah diclose maupun komputer telah di shutdown.

Pada dasarnya, operasi file terbagi 3 jenis. Read (R), Write(W), dan Append(A). Read artinya membaca isi file, write menulis data ke file dan append menambahkan data ke baris terakhir dalam file.
	int main(){
	FILE *in=fopen(namafile,mode); 
	fclose(in);
	getchar();
        return 0;
	} 

    FILE *in=fopen(namafile, mode); Langkah pertama kita wajib membuka file terlebih dahulu dengan perintah fopen. Fungsi fopen diikuti dengan 2 variabel diantaranya namafile dan mode. Nama file bebas kamu tentukan sendiri.
    Setelah dibuka, file tersebut wajib kita close dengan perintah fclose(namavariabel). Karena diawal kita membuka file lalu menyimpannya dalam variabel pointer “in”, maka diakhir program juga wajib menutup file dengan fopen(in);

r 	Membuka file sesuai namafilenya untuk dibaca, jika file tidak ada maka akan bernilai NULL.
w 	Membuka file untuk ditulis, jika sebelumnya sudah ada nama file yang sama, maka akan dilakukan overwrite/menimpa file dengan yang baru.
a 	Membuka file sesuai namafilenya untuk ditambahkan datanya dipaling bawah baris terakhir. Jika file tidak ada, maka akan membuat file baru secara otomatis.
r+ 	Sama dengan “r” tetapi selain file dapat dibaca juga dapat di tulis
w+ 	Sama dengan “w” tetapi selain file dapat ditulis juga dapat dibaca
a+ 	Sama dengan ”a” tetapi selain file dapat ditulis file juga dapat dibaca
'b' untuk binarry

Fungsi fopen() akan menghasilkan sebuah pointer yang menunjuk ke alamat memori dari file yang akan dibuka, karena itulah kita membutuhkan pointer untuk mengaksesnya.
 
// membuat pointer
File *fptr;

// membuka file
fptr = fopen("namafile.txt", "r");

```c
#include <stdlib.h>
#include <stdio.h>

void main()
{
  char buff[255];
  FILE *fptr;

  // membuka file
  if ((fptr = fopen("puisi.txt","r")) == NULL){
      printf("Error: File tidak ada!");
      // Tutup program karena file gak ada.
      exit(1);
  }

  // baca isi file dengan gets lalu simpan ke buff
  fgets(buff, 255, fptr);
  // tampilkan isi file
  printf("%s", buff);

  // tutup file
  fclose(fptr);
}
```
