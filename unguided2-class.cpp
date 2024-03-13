#include <iostream>
#include <string>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

// Definisi class Mahasiswa
class Mahasiswa {
public:
    string nama;
    int umur;
    string nim;
    string jurusan;
    
    void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "NIM: " << nim << endl;
    }
};

int main() {
    // Membuat objek mahasiswa1 dari class Mahasiswa
    Mahasiswa mahasiswa1;
    
    // Mengisi data mahasiswa1
    mahasiswa1.nama = "Muhammad Musyafa Fadila";
    mahasiswa1.umur = 19;
    mahasiswa1.jurusan = "Informatika";
    mahasiswa1.nim = "2311102320";
    
    // Menampilkan informasi mahasiswa1
    mahasiswa1.tampilkanInfo();
    
    return 0;
}
