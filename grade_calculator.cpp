#include <iostream>
using namespace std;

float calculateAverage(int exam1, int exam2, int finalExam){
	return (exam1 * 0.3) + (exam2 * 0.3) + (finalExam * 0.4);
	
}
 char getLetterGrade(float average) {
 	if (average>= 90) return 'A';
 	else if(average >= 80) return 'B';
 	else if(average >= 70) return 'C';
 	else if(average >= 60) return 'D';
 	else return 'F';
 }
 
 int main() {
 	int exam1, exam2, finalExam;
 	
 	cout << "Enter first exam grade:";
 	cin >> exam1;
 	
 	cout << "Enter second exam grade:";
 	cin >> exam2;
 	
 	cout << "Enter final exam grade";
 	cin >> finalExam;
 	
 	float average = calculateAverage(exam1, exam2, finalExam);
 	char grade = getLetterGrade(average);
 	
 	cout << "Your average is: " << average << endl;
 	cout << "Your letter grade is: " << grade << endl;
	 
	 return 0; 
 }
