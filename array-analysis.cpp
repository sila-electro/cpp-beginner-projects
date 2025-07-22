#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "5 sayi girin:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    int max = numbers[0];
    int min = numbers[0];
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / SIZE;

    cout << "En büyük sayi: " << max << endl;
    cout << "En küçük sayi: " << min << endl;
    cout << "Ortalama: " << average << endl;

    return 0;
}

