#include <iostream>
using namespace std;
int main(){
    int a, b, maksimal, minimal;
    cout<<"Masukan Nilai a = "; cin>>a;
    cout<<"Masukan Nilai b = "; cin>>b;
        maksimal = a > b ? a:b;
    cout<< "Bilangan Terbesar " << a << " dan " << b << " = " << maksimal << endl;
    minimal = a < b ? a:b;
    cout<< "Bilangan Terkecil " << a << " dan " << b << " = " << minimal << endl;
    
}