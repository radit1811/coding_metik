#include <iostream>
#include <string>
using namespace std;

int main() {
    string key;

    cout<<"==========================="<<endl;
    cout<<"NAMA KELUARGA BERINGIN"<<endl;

    cout<<"Masukan Inisial : "; cin>>key;

    if (key == "papa")
    {
        cout<<"Sularjo"<<endl;
    } else if (key == "mama")
    {
        cout<<"Titin S."<<endl;
    } else if (key == "anak1")
    {
        cout<<"A. Arkan"<<endl;
    } else if (key == "anak2")
    {
        cout<<"Annisa"<<endl;
    } else if (key == "anak3")
    {
        cout<<"Alle S."<<endl;
    } else if (key == "anak4")
    {
        cout<<"Dimas A."<<endl;
    } else if (key == "anak5")
    {
        cout<<"Satria A."<<endl;
    } else if (key == "anak6")
    {
        cout<<"A. Raditya"<<endl;
    } else if (key == "urutan")
    {
        cout<<"==========================="<<endl;

        cout<<"PAPA : SULARJO"<<endl;
        cout<<"MAMA : TITIN S."<<endl;
        cout<<"ANAK 1 : A. ARKAN"<<endl;
        cout<<"ANAK 2 : ANNISA S."<<endl;
        cout<<"ANAK 3 : ALLE S."<<endl;
        cout<<"ANAK 4 : DIMAS A."<<endl;
        cout<<"ANAK 5 : SATRIA A."<<endl;
        cout<<"ANAK 6 : A. RADITYA"<<endl;

        cout<<"==========================="<<endl;

    } else {
        cout<<"daftar nama tidak di temukan !!"<<endl;
    }
    
    return 0;

}