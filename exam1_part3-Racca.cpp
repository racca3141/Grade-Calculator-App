// Emerson Racca
// September 29, 2021
// Exam 1 - Grade Calculator App

/*
Write two (2) functions and use them in the main.  Be sure to separate function prototypes from their implementations.

1. Write a function that calculates and returns the average of 4 test scores with the following function prototype (no couts):

double testAverage(int t1, int t2, int t3, int t4)
2. Next write a function that takes in the average and returns the letter grade based on a straight scale (no couts). Use this prototype:

char letterGrade(double avg);
Then write a main C++ program that prompts the user for 4 exams and uses the functions to compute the average and show the grade based on a straight scale.  Format the output and implement the run again routine.

Exam #1: 75
Exam #2: 79
Exam #3: 85
Exam #4: 91

Your average is 82.5 = B

Would you like to run again? (y or n): _
*/

#include<iostream>
//#include<cmath>
#include<iomanip>

using namespace std;

double testAverage(int t1, int t2, int t3, int t4);
char letterGrade(double avg);


int main(void) {
	int test1, test2, test3, test4;
	double avgScore;
	char runAgain;

	cout << fixed << setprecision(1);

	cout << "Grade Calculator App\n\n";

	do {
		cout << "Please provide your 4 exam grades:\n\n";

		cout << "Exam #1: ";
		cin >> test1;
		cout << "Exam #2: ";
		cin >> test2;
		cout << "Exam #3: ";
		cin >> test3;
		cout << "Exam #4: ";
		cin >> test4;

		avgScore = testAverage(test1, test2, test3, test4);

		cout << "\nYour average is " << avgScore << " = " << letterGrade(avgScore);

		cout << "\n\n\nWould you like to run again? (y or n): ";
		cin >> runAgain;
		cout << endl;
	} while (runAgain == 'y');

	return 0;
}


double testAverage(int t1, int t2, int t3, int t4) {
	return ((t1 * 1.0 + t2 + t3 + t4) / 4);
}


//Using the idea from class notes.
char letterGrade(double avg) {
	char grade;
	if (avg < 60) {
		grade = 'F';
	}
	else if (avg < 70) {
		grade = 'D';
	}
	else if (avg < 80) {
		grade = 'C';
	}
	else if (avg < 90) {
		grade = 'B';
	}
	else {
		grade = 'A';
	}
	return grade;
}