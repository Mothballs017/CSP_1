/*********************************************************************************/
/*** Title: last_first_name_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 12, 2018                                                      ***/
/*** Description: Accept First and Last Name and Return Last,First			   ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	string first,last, names[5][2];
	cout << "Enter a first name: \n";
	getline(cin, first);
	cout << "Enter a last name: \n";
	getline(cin, last);
	cout << last << ", " << first << endl;

	for(int i=0;i<5;i++){
		cout << "Enter a first name: \n";
		getline(cin, first);
		cout << "Enter a last name: \n";
		getline(cin, last);
		names[i][0]=first;
		names[i][1]=last;

	}
	for(int i=0;i<5;i++){
		cout << names[i][1] << ", " << names[i][0] << endl;
	}
	return 0;
}
/*********************************************************************************/
