# Praktikum_4


# Latihan 1 (Perhitungan dengan kodisi diskon tertentu)
```
Alur Algoritma :
-Mendeklarasikan awal: (yt) untuk rumus perulangan "pilihan di akhir"
    	{cin>>yt;
    	if(yt=='Y' || yt=='y')
    	{goto awal;}
    	if(yt=='T' || yt=='t')
    	{goto selesai;}
    	selesai:}
-Menggunakan variable awal: (yt) untuk rumus perulangan "kode>4" pilihan menu
	if (kode>'4') {
	cin>>yt;
    	if(yt=='Y' || yt=='y')
    	{goto awal;}
    	if(yt=='T' || yt=='t')
    	{goto selesai;}
    	selesai:}
-Mendeklarasikan int jumlah, kode sebagai variable input
-Mendeklarasikan int, diskon,total,GT,harga sebagai variable perhitungan
-Menentukan rumus diskon dengan kondisi >=1jt(10%), >500k(5%), <500k(0%)
	if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
-Menggunakan rumus perhitungan dengan diskon yang telah di tentukan
	"Digunakan di setiap variable input"
	total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
	GT=total-diskon;
-Menampilkan kelayar

Berikut Pseudo-Codenya :

1. kode :....
2. if kode>4 then goto no 1, else no 9
3. jumlah : ....
4. total=jumlah*harga
5. if (total>=1000000) (diskon=total*0.1)
	else if (total>=501000) (diskon=total*0.05)
        else (diskon=total*0)
6. GT=total-diskon;
7. Pilihan?
8. if (Y) then goto no 1, else (T) goto no 9
9. selesai

Berikut Flowchatnya :

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.png)

Berikut Kode Lengkapnya :

#include <iostream>
using namespace std;
int main() {
    awal:
    int j_kue;
    char nama [30];
    char kode,yt;
    cout<<"                                         " << endl;
    cout<<"      DAFTAR MENU TOKO KUE ZAENAL        " << endl;
    cout<<" ______ ____________________ ___________ " << endl;
    cout<<"| Kode |    Daftar Kue      |    Harga  |" << endl;
    cout<<"|   1  | Grean Tea Cake     |    65000  |" << endl;
    cout<<"|   2  | Chocolate Cake     |    70000  |" << endl;
    cout<<"|   3  | Blueberry Cake     |    58500  |" << endl;
    cout<<"|   4  | Vanilla Cake       |    55000  |" << endl;
    cout<<"|______|____________________|___________|" << endl;
    cout<<endl;
    cout<<"Nama Pembeli      : " ;cin>>nama;
    cout<<"Kode Kue (1/2/3/4): " ;cin>>kode;
    cout<<"Jumlah Kue        : " ;cin>>j_kue;
  if (kode=='1') {
    int diskon,tot,t_bay,h_kue;
    h_kue=65000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Bolu Black Forest"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='2') {
    int diskon,tot,t_bay,h_kue;
    h_kue=70000;
    tot=j_kue*h_kue;
        if (j_kue>=1000000) (diskon=tot*0.1);
        else if (j_kue>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Chocolate Cake"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='3') {
    int diskon,tot,t_bay,h_kue;
    h_kue=58500;
    tot=j_kue*h_kue;
        if (j_kue>=1000000) (diskon=tot*0.1);
        else if (j_kue>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Blueberry Cake"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='4') {
    int diskon,tot,t_bay,h_kue;
    h_kue=55000;
    tot=j_kue*h_kue;
        if (j_kue>=1000000) (diskon=tot*0.1);
        else if(j_kue>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Vanilla Cake"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else {
    cout<<"Menu "<<kode<<" tidak ada di daftar menu";
    cout<<endl;
    }
    cout<<endl;
    cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
    cin>>yt;
    cout<<endl;
    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:

     return 0;
}
```
-Berikut hasil screenshotnya:
1.Kode pilihan T-selesai:

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.1.png)

2.Kode pilihan Y-mulai:

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.2.png)

3.Kondisi diskon 5% (1):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.3.png)

4.Kondisi diskon 5% (2):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.4.png)

6.Kondisi diskon 10% (1):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.5.png)

7.Kondisi diskon 10% (2):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.6.png)

8.Kondisi pilihan menu tidak ada:

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.7.png)

9.Kondisi tanpa diskon (1):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.8.png)

10.Kondisi tanpa diskon (2):

![img](https://github.com/zaenalmusthofa86/Praktikum-4/blob/master/Latihan1.9.png)
