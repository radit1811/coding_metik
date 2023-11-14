#include <iostream>
#include <string>
using namespace std;
int main(){
    
string user,pass;
 
 cout<<"username : ";cin>>user;
 cout<<"password : ";cin>>pass;
 
 if(pass=="admin123"){
  cout<<"Selamat datang di dunia Programming";
 }
 else{
  cout<<"Password salah, coba lagi yaaa..";
 }
return 0;
}