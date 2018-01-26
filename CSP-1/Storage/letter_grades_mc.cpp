/*********************************************************************************/
/*** Title: letter_grades_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 25, 2018                                                        ***/
/*** Description: Calculating Letter Grades		                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float A = 90;
	float B = 80;
	float C = 70;
	float D = 60;
	float st;
	cout << "Student's Grade: ";
	cin >> st;
	if(st>=A)
		cout << "Student has an A" << endl;
	else if(st<A&&st>=B)
			cout << "Student has a B" << endl;
		else if(st<B&&st>=C)
				cout << "Student has a C" << endl;
			else if(st<C&&st>=D)
					cout << "Student has a D" << endl;
				else
					cout << "Student has an F" << endl;
	return 0;
}

/*********************************************************************************/


