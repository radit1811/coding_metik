#include <iostream>
using namespace std;
int main(){
int uang;
 
 cout<<"Masukan uang kamu : ";cin>>uang;
 
 if(uang<5000){
  cout<<"di tabung";
 } else if(uang<7000)
 {
    cout<<"beli es sama gorengan kayanya enak!";
 } else if(uang<25000)
 {
    cout<<"beli mie ayam bakso sama es kenyang nih!";
 } else {
    cout<<"tidur aja deh";
 }
    cout<<" Keputusan yang tepat";
 
return 0;
}