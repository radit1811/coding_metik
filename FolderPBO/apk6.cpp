#include <iostream>
#include <string>
using namespace std;
int main(){
string jurusan;
 
 cout<<"Masukan Jurusan kamu : ";cin>>jurusan;
 
 if(jurusan == "pplg"){
  cout<<"Jurusan yang kamu pilih, Pengembangan Perangkat Lunak & Gim";
 } else if(jurusan == "tjkt")
 {
    cout<<"Jurusan yang kamu pilih, Teknik Jaringan Komputer & Telekomunikasi";
 } else if(jurusan == "dkv")
 {
    cout<<"jurusan yang kamu pilih, Desain Komunikasi Visual";
 } else if(jurusan == "bcf"){
    cout<<"Jurusan yang kamu pilih, Broadcasting & Perfilman";
 } else{
    cout<<"data yang dimasukan tidak di temukan";
 }
 
return 0;
}