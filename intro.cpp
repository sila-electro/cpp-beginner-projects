#include <iostream>
using namespace std;

int main(){
	string isim;
	int yas;
	string hedef;
	
	cout << "Adin ne? ";
	cin >> isim;
	
	cout << "Kac yasindasin? ";
	cin >> yas;
	
	cout << "Hayattaki en büyük hedefin nedir? ";
	cin.ignore();
	getline(cin, hedef);
	
	cout << endl;
	cout << "Merhaba " << isim << "!" << endl;
	cout << "Sen " << yas << " yasindasin ve hedefin: " << hedef << endl;
	
	return 0; 
	}
