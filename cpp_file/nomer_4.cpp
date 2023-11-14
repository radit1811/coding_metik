#include <iostream>
using namespace std;

int main(){
	
	// ( Variabel )
	float absensi, tugas, pts, pas, nilai_akhir;
	char nilai_huruf;

	cout<<"----------------------------------------------------"<<endl;
	cout<<"Menghitung Nilai Akhir dan Grade || SOAL NO 4. KEL 7"<<endl;
	cout<<"----------------------------------------------------"<<endl;

	// ( Input )
	cout<<"Masukan Nilai Absensi : ";
	cin>>absensi;
	
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	
	cout<<"Masukan Nilai PTS : ";
	cin>>pts;
	
	cout<<"Masukan Nilai PAS : ";
	cin>>pas;
	
	// ( Rumus )
	nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(pts*0.3)+(pas*0.4));
	
	if (nilai_akhir>=85){
		nilai_huruf='A';
	}else if (nilai_akhir>=75){
		nilai_huruf='B';
	}else if(nilai_akhir>=70){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	// ( Output )
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
	
	
}