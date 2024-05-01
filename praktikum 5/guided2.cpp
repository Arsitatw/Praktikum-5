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
