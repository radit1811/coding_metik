#include <iostream>
using namespace std;

int main(){
float c,k,ream, kel;

    cout<<"----------------------------------------------------"<<endl;
	cout<<"Menghitung Nilai Akhir dan Grade || SOAL NO 1. KEL 7"<<endl;
	cout<<"----------------------------------------------------"<<endl;

cout<<"Enter Temperature In Celcius: ";
cin >> c;
float f = (9*c) /5 ;
f += 32;
cout<<"Temperature In Fahrenheit: "<<f<<endl;
kel = c + 273.15;
cout<<"Temperatur In Kelvin: "<<kel<<endl;
ream = c * (4.0/5.0);
cout<<"Temperatur In Reamure: "<<ream<<endl;
return 0;
}