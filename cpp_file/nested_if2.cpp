#include <iostream>
using namespace std;
int main()
{
    string kerja,sekolah,hasil;
    int usia,pendapatan,tanggapan,bh; //(biaya_hidup)
    cout<<"Masukan Usia : "; cin>>usia;

    if(usia >= 18) {
        cout<<"Apakah kamu sudah bekerja? : "; cin>>kerja;

        if(kerja == "Y") {
            cout<<"Masukan pendapatan perbulan : "; cin>>pendapatan;
            cout<<"Masukan jumlah tanggungan : "; cin>>tanggapan;
            
            bh=pendapatan/tanggapan;
                if (bh<300000){
                    hasil="Penduduk Miskin";
                } else {
                    hasil="Bukan penduduk miskin";
                }

        } else {
            cout<<"Apakah kamu masih sekolah? : "; cin>>sekolah;
            if (sekolah == "Y"){
                hasil="Bukan penduduk miskin";
            } else {
                hasil="Penduduk miskin";
            }
        }
    } else {
        cout<<"Anda dibawah 18 tahun !"<<endl;
    }
        cout<<"==========================="<<endl;
        cout<<"Anda masuk kategori "<<hasil<<endl;

    return 0;
}