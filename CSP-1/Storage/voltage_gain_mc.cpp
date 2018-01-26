/*********************************************************************************/
/*** Title: voltage_gain_mc.cpp												   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 23, 2018                                                        ***/
/*** Description: Distance Between Coordinates	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int f = 9500; //120 Hz
	int n = 12; //4 stages
	float vgain = pow((275/sqrt((pow(23,2))+(0.5*pow(f,2)))),n);
	cout << "At a frequency of " << f << " hertz, the voltage gain is " << vgain << endl;
	return 0;
}
