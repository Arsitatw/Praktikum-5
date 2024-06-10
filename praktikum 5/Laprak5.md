# <h1 align="center">Laporan Praktikum Modul Struck </h1>
<p align="center">Arsita Wiwit Tiyaswening</p>
<p align="center">2311110028</p>

## Dasar Teori
Modul Struct dalam C++ merupakan sebuah fitur yang memungkinkan programmer untuk membuat tipe data baru yang terdiri dari beberapa tipe data lain yang berbeda. Struktur (struct) adalah kumpulan variabel yang terorganisir secara logis dalam satu unit, yang dapat mencakup tipe data primitif seperti int, float, double, atau bahkan tipe data lainnya seperti array, pointer, atau bahkan struct lainnya. 
Struct dideklarasikan dengan menggunakan kata kunci struct, diikuti oleh nama strukturnya. Deklarasi struct biasanya dilakukan di luar fungsi main() atau di dalam file header (.h) agar dapat diakses secara global.
Struct dapat dilewatkan sebagai parameter ke dalam fungsi, baik dengan menggunakan referensi atau pointer. Hal ini memungkinkan untuk memanipulasi data dalam struct tanpa harus mengembalikan nilai. Dengan menggunakan modul Struct dalam C++, programmer dapat dengan mudah mengorganisir data yang terkait ke dalam satu unit logis yang dapat digunakan dengan lebih mudah dan efisien. 
Ini merupakan salah satu fitur penting dalam pemrograman terstruktur dan berorientasi objek dalam bahasa C++

## Guided
### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.
```C++
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
```
### 2. Buat pemrograman untuk mengkategorikan hewan.
```C++
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;        
    string jenis_kelamin;         
    string kembangbiak;          
    string pernapasan;        
    string tempat_hidup;  
    bool karnivora;         
}; 

struct hewan_Darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_Darat hewan1;

struct Hewan_Laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;

};
Hewan_Laut hewan2;

int main(){
    hewan1.info_hewan.nama_hewan = "Kucing";
    hewan1.info_hewan.jenis_kelamin = "Jantan";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernapasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";
    
    //hewan2 lautan
    hewan2.info_hewan.nama_hewan = "Penyu";
    hewan2.info_hewan.jenis_kelamin = "Betina";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernapasan = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "siring dan ekor";
    hewan2.pertahanan_diri = "Cangkang yang kuat";
    

    //Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama Hewan : " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Pernapasan : " <<  hewan1.info_hewan.pernapasan << endl;
    cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora ? " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah kaki : " << hewan1.jumlah_kaki << endl;
    cout << "Apakah Menyusui ? " << hewan1.apakah_menyusui << endl;
    cout << "Suara : " << hewan1.suara << endl;


    cout << "\tHewan Laut" << endl;
    cout << "Nama Hewan : " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Pernapasan : " <<  hewan2.info_hewan.pernapasan << endl;
    cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora ? " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk Sirip : " << hewan2.bentuk_sirip << endl;
    cout << "Pertahanan diri : " << hewan2.pertahanan_diri << endl;


return 0;
}
``` 
## Unguided 
### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.
```C++
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku;        
    string pengarang;         
    string penerbit;          
    int tebal_halaman;        
    double harga_buku;           
};

int main() {
    const int jumlah_buku = 5; 
    Buku daftar_buku[jumlah_buku]; 
    // Data for the books
    string judul_buku[] = {"Algoritma Pemrograman", "Senja di Langit", "Harry Potter", "The Great Gatsby", "To Kill a Mockingbird"};
    string pengarang[] = {"Arsita Wiwit", "Arsita Wiwit", "J.K. Rowling", "F. Scott Fitzgerald", "Harper Lee"};
    string penerbit[] = {"Sidu", "Sidu", "Bloomsbury Publishing", "Scribner", "J. B. Lippincott & Co."};
    int tebal_halaman[] = {400, 300, 500, 180, 281};
    double harga_buku[] = {3000000, 2000000, 4500000, 1500000, 1200000};

    // Fill the array of Buku structs with data
    for (int i = 0; i < jumlah_buku; ++i) {
        daftar_buku[i].judul_buku = judul_buku[i];
        daftar_buku[i].pengarang = pengarang[i];
        daftar_buku[i].penerbit = penerbit[i];
        daftar_buku[i].tebal_halaman = tebal_halaman[i];
        daftar_buku[i].harga_buku = harga_buku[i];
    }

    // Display information of each book
    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Informasi Buku " << i + 1 << ":" << endl;
        cout << "Judul: " << daftar_buku[i].judul_buku << endl;
        cout << "Pengarang: " << daftar_buku[i].pengarang << endl;
        cout << "Penerbit: " << daftar_buku[i].penerbit << endl;
        cout << "Tebal Halaman: " << daftar_buku[i].tebal_halaman << endl;
        cout << "Harga Buku: " << daftar_buku[i].harga_buku << endl;
        cout << endl;
    }

    return 0;
}
```
#### Output
![Screenshot 202024-06-10 20103053](https://github.com/Arsitatw/Praktikum-5/blob/master/praktikum%205/Screenshot%202024-06-10%20103053.png)
#### Penjelasan 
Di dalam fungsi main(), sebuah array dari struct Buku dengan ukuran jumlah_buku (diinisialisasi sebagai 5) dideklarasikan. Kemudian, data buku seperti judul, pengarang, penerbit, tebal halaman, dan harga buku disediakan dalam array terpisah.
Selanjutnya, program mengisi array dari struct Buku dengan data yang telah disediakan menggunakan loop for. Setiap elemen struct Buku diisi dengan data yang sesuai dari array yang telah diinisialisasi sebelumnya.
Setelah array dari struct Buku terisi, program menggunakan loop for lagi untuk menampilkan informasi dari setiap buku. Informasi tersebut meliputi judul, pengarang, penerbit, tebal halaman, dan harga buku, yang dicetak ke layar.
Terakhir, program mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses dan kemudian menampilkan output.
