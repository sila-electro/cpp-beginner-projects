#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    while (true) {
        cout << "\nSimple Calculator\n";
        cout << "-----------------\n";
        cout << "1. Toplama\n";
        cout << "2. Cikarma\n";
        cout << "3. Carpma\n";
        cout << "4. Bolme\n";
        cout << "5. Cikis\n";
        cout << "Bir secim yapin (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Cikis yapiliyor...\n";
            break;
        }

        cout << "Ilk sayiyi girin: ";
        cin >> num1;
        cout << "Ikinci sayiyi girin: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Sonuc: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Sonuc: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Sonuc: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Sonuc: " << num1 / num2 << endl;
                else
                    cout << "Sifira bolme hatasi!" << endl;
                break;
            default:
                cout << "Gecersiz secim!" << endl;
        }
    }

    return 0;
}

