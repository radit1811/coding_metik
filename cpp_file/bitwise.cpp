#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e;
        cout<<"Input Nilai a = "; cin>>a;
        cout<<"Input Nilai b = "; cin>>b;

        c = a & b;
        d = a | b;
        e = a ^ b;

        cout<<"Hasil dari "<<a<<" & "<<b<<" = " <<c<<endl;
        cout<<"Hasil dari "<<a<<" | "<<b<<" = " <<d<<endl;
        cout<<"Hasil dari "<<a<<" ^ "<<b<<" = " <<e<<endl;

        return 0;
}