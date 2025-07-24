#include <iostream>
using namespace std;

int main(){
	int number, positiveCount = 0;
	
	for (int i = 0; i < 5; i++) {
		cout << "Enter number" << i+1 << ": ";
		cin >> number;
		
		if (number > 0) {
			positiveCount++;
			
		}
	}
	
	cout << "There are " << positiveCount << " positive numbers. " << endl;
	
	return 0;
}
