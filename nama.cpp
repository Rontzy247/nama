// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string nama;
    string sekolah;
    string ulang;
   cout<< ".....SELAMAT DATANG DI PORTAL NAMA DAN SEKOLAH....."<<endl;
   cout<<"By: RonzzDev2026"<<endl;
    do {
    cout<< "Masukkan Namamu ";
    cin>> nama;
    cout<< "Masukkan Nama/Asal Sekolah ";
    cin>> sekolah;
    cout<< "Namamu Adalah ";
    cout<< nama<<endl;
    cout<< "Nama Sekolah Mu Adalah ";
    cout<< sekolah<<endl;
    cout<< "apakah Anda Mau Mengulang Tekan y/Y: ";
    cin>> ulang;
   
    }
        //operator atau
       while (ulang=="y" || ulang=="Y");
    system("pause");
    return 0;
}
