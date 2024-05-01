#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku;        
    string pengarang;         
    string penerbit;          
    int tebal_halaman;        
    double harga_buku;           
}; Buku buku1, buku2;

int main(){

buku1.judul_buku = "Algoritma Pemrograman";
buku1.pengarang = "Arsita Wiwit";
buku1.penerbit = "Sidu";
buku1.tebal_halaman = 400;
buku1.harga_buku = 3000000;

buku2.judul_buku = "Senja di Langit";
buku2.pengarang = "Arsita Wiwit";
buku2.penerbit = "Sidu";
buku2.tebal_halaman = 300;
buku2.harga_buku = 2000000;

//menampilkan data
cout << "Informasi Buku" << endl;
cout << "\nJudul : " << buku1.judul_buku<< endl;
cout << "Pengarang : " << buku1.pengarang << endl;
cout << "Penerbit : " << buku1.penerbit << endl;
cout << "Tebal Halaman : " << buku1.tebal_halaman << endl;
cout << "Harga Buku : " << buku1.harga_buku << endl;


cout << "\nInformasi Buku" << endl;
cout << "\nJudul : " << buku2.judul_buku<< endl;
cout << "Pengarang : " << buku2.pengarang << endl;
cout << "Penerbit : " << buku2.penerbit << endl;
cout << "Tebal Halaman : " << buku2.tebal_halaman << endl;
cout << "Harga Buku : " << buku2.harga_buku << endl;


return 0;
}



