#include <iostream>
#include <string>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    string nim;
    int semester;
    string jurusan;
};

int main() {
    // Membuat objek mahasiswa1 dari struct Mahasiswa
    Mahasiswa mahasiswa1;
    
    // Mengisi data mahasiswa1
    mahasiswa1.nama = "Muhammad Musyafa Fadila";
    mahasiswa1.umur = 20;
    mahasiswa1.nim = "2311102320";
    mahasiswa1.semester = 2;
    mahasiswa1.jurusan = "Informatika";
    
    // Menampilkan informasi mahasiswa1
    cout << "Nama: " << mahasiswa1.nama << endl;
    cout << "Umur: " << mahasiswa1.umur << endl;
    cout << "NIM: " << mahasiswa1.nim << endl;
    cout << "Semester: " << mahasiswa1.semester << endl;
    cout << "Jurusan: " << mahasiswa1.jurusan << endl;
    
    return 0;
}
