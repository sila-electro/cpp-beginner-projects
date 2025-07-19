#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int secretNumber = rand() %100 + 1;
	int guess;
	int attempts = 0;
	
	
	cout << "Guess the number (between 1 and 100): " << endl;
	
	while (true) {
		cout << "Your guess: ";
		cin >> guess;
		attempts++;
		
		if (guess < secretNumber) {
			cout << "Too low! Try a higher number." << endl;
		} else if (guess > secretNumber) {
			cout << "Too high! Try a lower number." << endl;
		} else {
			cout << "Congratulations! You guessed it in " << attempts << "tries." << endl;
			break;
		}
	} 
	
	return 0;
}
