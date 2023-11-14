#include <iostream>
using namespace std;
int main(){
    int name, kelas, a, b, c, tambah, kurang, kali, gabung;
    float bagi, mod;

    cout<<"-----------------------------"<<endl;
	cout<<"OPERATOR ARITMATIKA"<<endl;
	cout<<"-----------------------------"<<endl;

    cout<<"Nama : Ahmad Raditya Surya P."<<endl;
    cout<<"Kelas : XPPLG1"<<endl;
    
    cout<<"-----------------------------"<<endl;
	cout<<"ASSTS SEMESTER GANJIL ( PBO )"<<endl;
	cout<<"-----------------------------"<<endl;

    cout<<"Masukan Nilai 1 = "; cin>>a;
    cout<<"Masukan Nilai 2 = "; cin>>b;
    cout<<"Masukan Nilai 3 = "; cin>>c;

    tambah = a+b;
    kali = b*c;
    bagi = a/b; 
    gabung = a+b-c;

	cout<<"-----------------------------"<<endl;

    cout<<"Hasil Penjumlahan Nilai 1 + Nilai 2 : "<<tambah<<endl;
    cout<<"Hasil Penjumlahan Nilai 2 * Nilai 3: "<<kali<<endl;
    cout<<"Hasil Penjumlahan Nilai 1 / Nilai 2: "<<bagi<<endl;
    cout<<"Hasil Penjumlahan Nilai 1 + Nilai 2 - Nilai 3: "<<gabung<<endl;
}