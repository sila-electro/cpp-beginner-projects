#include <iostream>
using namespace std;

int findMax(int a, int b, int c){
	int max = a;
	if (b > max) max = b;
	if ( c> max) max = c;
	return max; 
}

int findMin(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main() {
	int x, y, z;
	
	cout << "Enter three numbers: ";
	cin >> x >> y >> z;
	
	cout << "Maximum is: " << findMax(x, y, z) << endl;
	cout << "Minimum is: " << findMin(x, y, z) << endl;
	
	return 0;
}
