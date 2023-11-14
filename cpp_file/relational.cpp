#include <iostream>
using namespace std;
int main(){
    int a, b, c;

    cout<<"-----------------------------"<<endl;
	cout<<"OPERATOR RELATIONAL"<<endl;
	cout<<"-----------------------------"<<endl;

    cout<<"Nama : Ahmad Raditya Surya P."<<endl;
    cout<<"Kelas : XPPLG1"<<endl;
    
    cout<<"-----------------------------"<<endl;
	cout<<"ASSTS SEMESTER GANJIL ( PBO )"<<endl;
	cout<<"-----------------------------"<<endl;

    cout<<"Masukan Nilai 1 = "; cin>>a;
    cout<<"Masukan Nilai 2 = "; cin>>b;
    cout<<"Masukan Nilai 3 = "; cin>>c;

    int hasil1 = a < b;
    int hasil2 = b >= c;
    int hasil3 = a == b;
    
	cout<<"-----------------------------"<<endl;

    cout<<"Hasil Penjumlahan Nilai 1 < Nilai 2 : "<< hasil1<<endl;
    cout<<"Hasil Penjumlahan Nilai 2 >= Nilai 3 : "<< hasil2<<endl;
    cout<<"Hasil Penjumlahan Nilai 1 == Nilai 2: "<< hasil3<<endl;

    return 0;
}