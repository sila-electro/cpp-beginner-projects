#include <iostream>
using namespace std;

int topla(int a, int b) {
	return a + b;
}

int cikar(int a, int b) {
	return a - b;
}

int carp(int a, int b) {
	return a * b;
}

int main() {
	int sayi1, sayi2;
	
	cout << "1. sayiyi gir:";
	cin >> sayi1;
	
	cout << "2. sayiyi gir:";
	cin >> sayi2;
	
	cout << "Toplam:" << topla(sayi1, sayi2) << endl;
	cout << "Fark:" << cikar(sayi1, sayi2) << endl;
	cout << "carpim:" << carp(sayi1, sayi2) << endl;
	
	return 0;
}
