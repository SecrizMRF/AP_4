#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
void pesan() {
    cout << "====== Welcome Genii O'Four ======" << endl;
}

// Fungsi dengan nilai balikan
int tambah (int a, int b) {
    return a + b;
}

int kali (int a, int b) {
    return a * b;
}

// Fungsi overload
int kali (int a, int b, int c) {
    return a * b * c;
}

float kali (float a, float b) {
    return a * b;
}

// Fungsi rekursif
// 5! = 5 x 4 x 3 x 2 x 1
long faktorial (int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}

int main(){
    system("cls");
    int x = 7, y = 3, z = 2;
    
    // Fungsi void
    pesan();

    // Fungsi dengan nilai balikan
    int hasilTambah = tambah(x,y);
    cout << "Hasil tambah = " << hasilTambah << endl;

    cout << tambah(x,y) << endl << endl;

    // Fungsi overload
    int hasilKali = kali(x,y);
    cout << "Hasil kali (int 2) = " << hasilKali << endl;

    int hasilKali3 = kali(x,y,z);
    cout << "Hasil kali (int 3) = " << hasilKali3 << endl;

    float hasilKaliFloat = kali(2.5f, 3.1f);
    cout << "Hasil kali pecahan = " << hasilKaliFloat << endl;

    // Fungsi rekursif
    int faktor = faktorial(x);
    cout << "Faktorial x = " << faktor << endl;
}