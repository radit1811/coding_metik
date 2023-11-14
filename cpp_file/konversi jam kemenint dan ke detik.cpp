#include <iostream>
using namespace std;
    int main()
	{
    	int jam , menit , hasil;
    	int jam_detik = 3600;
    	int jam_menit = 60;
    	
    	cout<<"\t KONVERSI JAM DAN MENIT KE DETIK \n\n";
    	
    	cout<<"MASUKAN JUMLAH JAM   : ";
    	cin>> jam ;
    	
    	cout<<"MASUKAN JUMLAH MENIT  :";
    	cin>>menit;
    	
    	hasil = jam * jam_detik + menit * jam_menit;
    	
    	cout<<"\n HASIL KONVERSI DETIKNYA ADALAH: "<<hasil<<"detik";

		   
	
		    	
	}
