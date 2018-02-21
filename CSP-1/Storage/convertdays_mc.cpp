/*********************************************************************************/
/*** Title: convertdays_mc.cpp		 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 20, 2018														   ***/
/*** Description: Converting Dates to Integers								   ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int ConvertDays(int, int, int);

int main(){
	cout << ConvertDays(01,01,0010) << endl;
	return (0);
}

int ConvertDays(int month, int day, int year){
	int date=year*10000+month*100+day;
	return date;
}
