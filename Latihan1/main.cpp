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

