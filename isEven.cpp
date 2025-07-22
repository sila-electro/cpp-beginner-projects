#include <iostream>
using namespace std;


bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isEven(x)) {
        cout << x << " is even." << endl;
    } else {
        cout << x << " is odd." << endl;
    }

    return 0;
}

