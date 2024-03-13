#include <iostream>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

// Fungsi untuk menghitung luas persegi panjang
float hitungLuas(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung keliling persegi panjang
float hitungKeliling(float panjang, float lebar) {
    return 2 * (panjang + lebar);
}

int main() {
    float panjang, lebar;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    // Memanggil fungsi hitungLuas() dan hitungKeliling() untuk mendapatkan hasil
    float luas = hitungLuas(panjang, lebar);
    float keliling = hitungKeliling(panjang, lebar);

    // Menampilkan hasil perhitungan luas dan keliling
    cout << "Luas persegi panjang: " << luas << endl;
    cout << "Keliling persegi panjang: " << keliling << endl;

    return 0;
}
