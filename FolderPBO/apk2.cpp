#include <iostream>
using namespace std;
int main(){
    int total,diskon;

    cout<<"DISKON"<<endl;
    cout<<"=================="<<endl;
    cout<<"belanja di minimarket"<<endl;
    cout<<"Masukan Harga Barang = "; cin>>total;

    if (total>75000)
    {
        diskon = total *25/100;
        cout<<"selamat anda mendapatkan DISKON 25%"<<endl;
        cout<<"total pembayaran anda : "<<diskon<<endl;
    } else
    {
        cout<<"terimakasih sudah berbelanja"<<endl;
    }
    
    return 0;
    


}