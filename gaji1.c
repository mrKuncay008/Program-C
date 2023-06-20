#include<stdio.h>
/*
nik, nama, golongan, gajipok, status(1/2), tinjangan, lembur, potongan,lembur,potongan,gajiber;

soal:
- Direktur golongan(3), gaji pokok 4.000.000
- KA.bagian gol(2), gaji pokok 2.500.000
- Staff gol(1), 1.500.000

mencari:
tunjangan = (if sta 1 & gol 1 = 500rb), (if sta 1 & 2 gol = 1jt), (if sta 1 & gol 3 = 1.500jt)
			else status 2 = 0
- Gaji bersih = gajipok + tunjangan + lembur - potongan
*/
/*
output
pegawai ada 3
nik 411
nama jhon
golonagn 3
jabatan Direktur
gaji pokok 4.000.000
sattus 1
tunjangan 500.000
lembur 60.000
potongan 3000
gaji bersih 4.557.000
end
*/
int main()
{
   int nama[10], jabatan[10];
   int nik[10], jum, gol[10], sta[10], pot[10];
   int gapok[10], glembur[10], tujangan[10], gaber[10];
    
	// input jumlah pegawai
    printf("Masukan jumlah Pegawai: ");
    scanf("%d",&jum);
  	
	// intpu data pegawai
	for(int i = 1;i<=jum; ++i ) {
		printf("\npegawai ke- %d\n", i);
		printf("Masukan NIK: ");
			scanf("%d", &nik[i]);
		printf("Masukan nama: ");
			scanf("%s", nama[i]);
		printf("Masukan Golongan: ");
			scanf("%d", &gol[i]);
		printf("Masukan Satus: ");
			scanf("%d", &sta[i]);
		printf("Masukan Lemburan: ");
	 		scanf("%d", &glembur[i]);
	 	printf("Masukan Potongan: ");
	 		scanf("%d", &pot[i]);
	 	printf("Masukan Jabatan: ");
	 		scanf("%s", jabatan[i]);
	 	printf("Masukan Gaji Pokok: ");
	 		scanf("%d", &gapok[i]);
		
	 	printf("Masukan Lemburan: ");
	 		scanf("%d", &glembur[i]);
	 	printf("Masukan Potongan: ");
	 		scanf("%d", &pot[i]);
	 
	
	switch (gol[i])
	{
	case 1 :
		gapok[i]=1500000;
		tujangan[i]=500000;
		printf("Staff");
		break;

	case 2 :
		gapok[i]=2500000;
		tujangan[i]=1000000;
		printf("KA.bagian");
		break;
	
	case 3 :
		gapok[i]=4000000;
		tujangan[i]=1500000;	
		printf("Direktur");
		break;

	default:
		gapok[i]=0;
		tujangan[i]=0;
		break;
	}

	if (sta[i] > 1) {
		gol[i]= sta[i];
	} else {
		gol[i]= 0;
	}
	
	gaber[i]= ((gapok[i] + tujangan[i] + glembur[i])- pot[i]);
	printf("\n");
	}

	printf("ENTRY GAJI PEGAWAI \n");
	printf(" ============== ");

	for (i = 1; i<=jum; i++)
	{
		printf("   \nPegawai ke- %d\n", i);
		printf("NIK: %d\n", nik[i]);
		printf("Nama: %c\n", nama[i]);
		printf("Golongan: %d\n", gol[i]);
		printf("Jabatan: %c\n", jabatan[i]);	
		printf("Gaji Pokok: %d\n", gapok[i]);
		printf("Status: %d\n", sta[i]);
		printf("Tunjangan: %d\n", tujangan[i]);
		printf("Uang Lembur: %d\n", glembur[i]);
		printf("Potongan: %d\n", pot[i]);
		printf("\n");
		printf("  \nGaji Bersihnya adalah: Rp.%d", gaber[i]);
		printf("\n");
	}

    return 0;
}

  

   /*
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	printf("###########  Entry Gaji Pegawai #######\n");
    printf("========================================\n");

  string nama[10];
   int jum, gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],tun_pengabdian[10],pajakgapok[10],pajaklembur[10],totpajak[10],gajibersih[10];
	
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
	cout<<"Masukan Nama              : ";
	cin>>nama[i];
	cout<<"Masukan Golongan          : ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja  : ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			gapok[i]=1486500;
			tun_pengabdian[i]=250000;
			break;
		case 2 :
			gapok[i]=1926000;
			tun_pengabdian[i]=300000;
			break;
		case 3 :
			gapok[i]=2456700;
			tun_pengabdian[i]=350000;
			break;
		case 4 :
			gapok[i]=2899500;
			tun_pengabdian[i]=400000;
			break;
		default :
			gapok[i]=0;
			tun_pengabdian[i]=0;	
	}
	
	if (jkerja[i]>173){
	    jlembur[i]=jkerja[i]-173;	
	}else{
	     jlembur[i]=0;
	}
	
	glembur[i]=jlembur[i]*20000;
	pajakgapok[i]=0.05*gapok[i];
	pajaklembur[i]=0.05*glembur[i];
	totpajak[i]=pajakgapok[i]+pajaklembur[i];
	gajibersih[i]=((gapok[i]+tun_pengabdian[i]+glembur[i])-totpajak[i]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Gaji Lembur          : "<<glembur[i]<<endl;
		cout<<"Pajak Gaji Pokok     : "<<pajakgapok[i]<<endl;
		cout<<"Pajak Lembur         : "<<pajaklembur[i]<<endl;
		cout<<"Total Pajak          : "<<totpajak[i]<<endl;
		cout<<"Tunjangan Pengabdian : "<<tun_pengabdian[i]<<endl;
		cout<<"Gaji Diterima        : "<<gajibersih[i]<<endl;
		cout<<endl<<endl;	
	}	

getch();
}*/
