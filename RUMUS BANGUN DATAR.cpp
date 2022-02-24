#include <iostream>
using namespace std;

main()
{
    int kode,a,t,l,p,s,d1,d2,s1,s2,s3,s4;
    int ks3,lpj,kpj,lp,kp,kbk,ljg,kjg,lt,kt,lly,kly;
    float ls3,lbk,llg,klg,phi,r;
    phi=3.14;

    cout<<"\t RUMUS SEMUA BANGUN DATAR"<<endl;
    cout<<endl;
    cout<<"Masukan Kode Rumus :";cin>>kode;
    cout<<endl;

    switch(kode)
    {
        case 1 :
            cout<<"\tLuas Segitiga"<<endl;
            cout<<" Alas : ";cin>>a;
            cout<<" Tinggi : ";cin>>t;
            ls3=1*a*t/2;
            cout<<"Luas Segitiga  : "<<ls3<<" CM"<<endl;
        break;
        case 2 :
            cout<<"\tKeliling Segitiga"<<endl;
            cout<<" Sisi 1 : ";cin>>s1;
            cout<<" Sisi 2 : ";cin>>s2;
            cout<<" Sisi 3 : ";cin>>s3;
            ks3=s1+s2+s3;
            cout<<"Keliling Segitiga  : "<<ks3<<" CM"<<endl;
        break;
        case 3 :
            cout<<"\tLuas Persegi Panjang"<<endl;
            cout<<"Panjang : ";cin>>p;
            cout<<"Lebar : ";cin>>l;
            lpj=p*l;
            cout<<"Luas Persgi Panjang : "<<lpj<<" CM"<<endl;
        break;
        case 4 :
            cout<<"\tKeliling Persegi Panjang"<<endl;
            cout<<"Panjang : ";cin>>p;
            cout<<"Lebar : ";cin>>l;
            kpj=2*(p+l);
            cout<<"Keliling Persegi Panjang : "<<kpj<<" CM"<<endl;
        break;
        case 5 :
            cout<<"\tLuas Persegi"<<endl;
            cout<<"Sisi : ";cin>>s;
            lp=s*s;
            cout<<"Luas Persegi : "<<lp<<" CM"<<endl;
        break;
        case 6 :
            cout<<"\tLuas Persegi"<<endl;
            cout<<"Sisi : ";cin>>s;
            kp=4*s;
            cout<<"Luas Persegi : "<<kp<<" CM"<<endl;
        break;
        case 7 :
            cout<<"\tLuas Belah Ketupat"<<endl;
            cout<<"Diagonal 1 : ";cin>>d1;
            cout<<"Diagonal 2 : ";cin>>d2;
            lbk=1*d1*d2/2;
            cout<<"Luas Belah Ketupat : "<<lbk<<" CM"<<endl;
        break;
        case 8 :
            cout<<"\tKeliling Belah Ketupat"<<endl;
            cout<<"Sisi 1 : ";cin>>s1;
            cout<<"Sisi 2 : ";cin>>s2;
            cout<<"Sisi 3 : ";cin>>s3;
            cout<<"Sisi 4 : ";cin>>s4;
            kbk=s1+s2+s3+s4;
            cout<<"Keliling Belah Ketupat : "<<kbk<<" CM"<<endl;
        break;
        case 9 :
            cout<<"\tLuas Jajar Genjang"<<endl;
            cout<<"Alas : ";cin>>a;
            cout<<"Tinggi : ";cin>>t;
            ljg=a*t;
            cout<<"Luas Jajar Genjang : "<<ljg<<" CM"<<endl;
        break;
        case 10 :
            cout<<"\tKeliling Jajar Genjang"<<endl;
            cout<<"Sisi 1 : ";cin>>s1;
            cout<<"Sisi 2 : ";cin>>s2;
            cout<<"Sisi 3 : ";cin>>s3;
            cout<<"Sisi 4 : ";cin>>s4;
            kjg=s1+s2+s3+s4;
            cout<<"Keliling Jajar Genjang : "<<kjg<<" CM"<<endl;
        break;
        case 11 :
            cout<<"\tLuas Trapesium"<<endl;
            cout<<"Sisi 1 : ";cin>>s1;
            cout<<"Sisi 2 : ";cin>>s2;
            cout<<"Tinggi : ";cin>>t;
            lt=(s1+s2)*t/2;
            cout<<"Luas Trapesium  : "<<lt<<"CM"<<endl;
        break;
        case 12 :
            cout<<"\tKeliling Trapesium"<<endl;
            cout<<"Sisi 1 : ";cin>>s1;
            cout<<"Sisi 2 : ";cin>>s2;
            cout<<"Sisi 3 : ";cin>>s3;
            cout<<"Sisi 4 : ";cin>>s4;
            kt=s1+s2+s3+s4;
            cout<<"Keliling Trapesium : "<<kt<<" CM"<<endl;
        break;
        case 13 :
            cout<<"\tLuas Layang-Layang"<<endl;
            cout<<"Diagonal 1 : ";cin>>d1;
            cout<<"Diagonal 2 : ";cin>>d2;
            lly=1*d1*d2/2;
            cout<<"Luas Layang-Layang: "<<lly<<" CM"<<endl;
        break;
        case 14 :
            cout<<"\tKeliling Layang-Layang"<<endl;
            cout<<"Sisi 1 : ";cin>>s1;
            cout<<"Sisi 2 : ";cin>>s2;
            cout<<"Sisi 3 : ";cin>>s3;
            cout<<"Sisi 4 : ";cin>>s4;
            kly=s1+s2+s3+s4;
            cout<<"Keliling Layang-Layang : "<<kly<<" CM"<<endl;
        break;
        case 15 :
            cout<<"\tLuas Lingkaran"<<endl;
            cout<<"Jari-Jari : ";cin>>r;
            llg=phi*r*r;
            cout<<"Luas Lingkaran: "<<llg<<" CM"<<endl;
        break;
        case 16 :
            cout<<"\tLuas Lingkaran"<<endl;
            cout<<"Jari-Jari : ";cin>>r;
            klg=2*phi*r;
            cout<<"Luas Lingkaran: "<<klg<<" CM"<<endl;
        break;

        return 0;
    }
}
