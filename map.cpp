#include <iostream>
#include <map>
#include <string>

using namespace std;



int main() {
    // Mendeklarasikan map untuk menyimpan nilai-nilai mahasiswa (nama, nilai)
    map<string, int> nilai_mahasiswa;

    // Memasukkan nilai-nilai mahasiswa ke dalam map
    nilai_mahasiswa["Rayya"] = 89;
    nilai_mahasiswa["Titan"] = 65;
    nilai_mahasiswa["Didik"] = 90;
    nilai_mahasiswa["Alden"] = 100;
    nilai_mahasiswa["Hemas"] = 75;

    // Menampilkan nilai dari map
    cout << "Nilai mahasiswa Rayya: " << nilai_mahasiswa["Rayya"] << endl;
    cout << "Nilai mahasiswa Titan: " << nilai_mahasiswa["Titan"] << endl;
    cout << "Nilai mahasiswa Didik: " << nilai_mahasiswa["Didik"] << endl;
    cout << "Nilai mahasiswa Alden: " << nilai_mahasiswa["Alden"] << endl;
    cout << "Nilai mahasiswa Hemas: " << nilai_mahasiswa["Hemas"] << endl;

    return 0;
}
