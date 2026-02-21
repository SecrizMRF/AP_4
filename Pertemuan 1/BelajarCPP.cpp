#include <iostream>
#include <conio.h> // getch(), getche() putchar()
using namespace std;

int main() {
    system("cls");
    string nama, nim, waktu;
    float ipk;
    char kom, jenis_kelamin;

    cout << "Hello world\n";

    // cin >> nama;
    // cout << nama;

    cout <<"Masukkan Nama : ";
    getline(cin, nama);

    cout <<"Masukkan Kom : ";
    cin >> kom;

    cout <<"Masukkan NIM : "; // 251401001
    cin >> nim;

    cout <<"Masukkan IPK : "; // 3.4
    cin >> ipk;

    cout << "Masukkan Jenis kelamin anda (L/P) : ";
    jenis_kelamin = getche();

    cout << "\n";

    cout << "Nama : " << nama << endl;
    cout << "KOM  : " << kom << endl;
    cout << "NIM  : " << nim << endl;
    cout << "IPK  : " << ipk << endl;
    cout << "Jenis kelamin : ";
    putchar(jenis_kelamin);
    cout << endl;

    // ctrl + /

    // inputan waktu (pagi, siang, sore, malam)
    cout << "Masukkan waktu: ";
    cin >> waktu;

    // Selamat pagi, Rizky Fadhillah!
    cout << "\nSelamat " << waktu << ", " << nama;

    getch();
}