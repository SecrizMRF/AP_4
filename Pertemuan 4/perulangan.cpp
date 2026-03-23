#include <iostream>
using namespace std;

int main() {
    system("cls");

    // goto : pergi ke...
    // goto A;
    // B:
    // cout << "adalah ";
    // goto C;
    // E:
    // cout << "Komputer ";
    // goto F;
    // C:
    // cout << "anak ";
    // goto D;
    // A:
    // cout << "Aku ";
    // goto B;
    // F:
    // cout << "USU.";
    // goto n;
    // D:
    // cout << "Ilmu ";
    // goto E;
    // n:
    
    // Menampilkan angka kelipatan 5
    // int i = 40;

    // lipat:
    // if (i%5 == 0) {
    //     cout << i << " ";
    // }
    // i--;

    // if (i >= 5) {
    //     goto lipat;
    // }
    // cout << endl;

    // While statement
    // cout << "\nini While\n";
    // while (i >= 1) {
    //     cout << i << ". Lorem" << endl;
    //     i--;
    // }
        
    // Do while statement
    // int i = 10;
    // string ulang;
    // cout << "\nini Do While\n";
    // do {
    //     cout << i << ". Lorem" << endl;
    //     cout << "Mau ngulang ga? ";
    //     cin >> ulang;
    // } while (ulang == "ulang");
    // cout << endl;

    // For loop
    // for (inisialisasi, kondisi, increment/decrement )
    // for (int i = 1; i <= 5; ++i) {
    //     cout << "Hidup Jowoki!\n";
    // }
    // cout << endl;

    // atribut length()
    // string kata;
    // cout << "Masukkan kata: ";
    // cin >> kata;
    // for (int i = 0; i < kata.length(); i++) {
    //     cout << i+1 << ". " << kata[i] << endl;
    // }

    // Nested for
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // latihan
    int n, nil;
    nil = 1;
    cout << "masukkan nilai: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << nil << " ";
        (i%2 == 0)? nil *= 2 : nil += 7;
    }

    // Pre test
    // int k = 11;
    // switch (k) {
    //     case 3+8: 
    //         cout << "Hello!" << endl;
    //     case 10: 
    //         cout << "Apa kabar?" << endl; 
    //     default: 
    //         cout << "Apacoba" << endl;
    // }

    // int hp, torsi;
    // hp = 400;
    // torsi = 280;
    // if (hp < 800) {
    //     if (torsi > 600) {
    //         cout << "Car is perfectly balance!\n";
    //     } else if ((torsi - hp) < 50) {
    //         cout << "Car's torque is too low\n";
    //     } else {
    //         cout << "Car is unstable\n";
    //     }
    // } else {
    //     if ((hp == 400) && (torsi >= 300)) {
    //         cout << "Car power is just fine\n";
    //     } else {
    //         cout << "Mobil anomali cik";
    //     }
    // }
}