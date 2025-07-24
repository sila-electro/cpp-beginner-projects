#include <iostream>
using namespace std;


double calculateAverage(double a, double b, double c) {
	return(a + b + c) / 3;
}

int main(){
	double num1, num2, num3;
	
	cout << "Enter 3 numbers: ";
	cin >> num1 >> num2 >> num3;
	
	double average = calculateAverage(num1, num2, num3);
	
	cout << "The average is: " << average << endl;
	
	return 0;
}
