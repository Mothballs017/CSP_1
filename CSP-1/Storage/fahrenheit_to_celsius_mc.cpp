/*********************************************************************************/
/*** Title: fahrenheit_to_celsius_mc.cpp									   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 18, 2018                                                        ***/
/*** Description: Class average activity		                               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
	float F = 86.5; //98.6 formerly
	float C = (5.0/9.0)*(F-32.0);
	cout << "For a Fahrenheit temperature of " << F
		 << " degrees, the equivalent Celsius temperature is "
		 << C << " degrees." << endl;
	return(0);
}
/*********************************************************************************/
