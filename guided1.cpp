#include <iostream>

using namespace std;

//Muhammad Musyafa Fadila
//2311102320
//IF-11-H

int main (){
    char op;
    float num1, num2;

    cout << "Masukan operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukan dua operand:";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "Hasil penjumlahan:" << num1 + num2;
        break;
    case '-':
        cout << "Hasil pengurangan:" << num1 - num2;
        break;
    case '*':
        cout << "Hasil perkalian:" << num1 * num2;
        break;
    case '/':
        cout << "Hasil pembagian:" << num1 / num2;
        break;
    
    default:
       cout << "Error! operator is not correct";
    }

    return 0;
}