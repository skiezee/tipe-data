#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main(){

    struct   Mahasiswa mhs1, mhs2;

    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    cout << "=== Mahasiswa 1 ===" << endl;
    cout << "Nama: " << mhs1.name << endl;
    cout << "Alamat:" << mhs1.address << endl;
    cout << "Age:" << mhs1.age << endl;
    
    cout << "=== Mahasiswa 2 ===" << endl;
    cout << "Nama: " << mhs2.name << endl;
    cout << "Alamat:" << mhs2.address << endl;
    cout << "Age:" << mhs2.age << endl;
    

    return 0;
};
