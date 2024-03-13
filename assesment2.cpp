#include <iostream>
#include <string>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

int main() {

    // inisialisasi nama mahasiswa dan nilai
    string nama_mahasiswa[] = {"luna", "diana", "dodit", "rudi", "indah"};
    double nilai_mahasiswa[][2] = {{89.88}, {65.33}, {90.00}, {100}, {75.62}};

    // soal 1 (Cetaklah nilai dari array ke 3 !)
    cout << "Nilai dari array ke 3: " << nilai_mahasiswa[2][0] << ", " << nilai_mahasiswa[2][1] << endl;

    //soal 2 (Cetaklah nama dari array ke 1 !)
    cout << "Nama dari array ke 1: " << nama_mahasiswa[0] << endl;

    // soal 3 (Jumlahkan semua nilai dari semua array!)
    double total_nilai = 0;
    for (int i = 0; i < 5; ++i) {
        total_nilai += nilai_mahasiswa[i][0] + nilai_mahasiswa[i][1];
    }
    cout << "Total nilai semua mahasiswa: " << total_nilai << endl;

    // soal 4 (Carilah rata-ratanya!)
    double rata_nilai = total_nilai / 5 ; // Jumlah total nilai adalah 10 (5 mahasiswa * 2 nilai)
    cout << "Rata-rata nilai mahasiswa: " << rata_nilai << endl;

    return 0;
}
