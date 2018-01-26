/*********************************************************************************/
/*** Title: bicycle_pedal_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 18, 2018                                                        ***/
/*** Description: Class average activity		                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	float pi=3.14;
	float d=7.0;
	float P=300.0;
	float S=10000.0;
	float r=(d*P)/(pi*S);
	float r3=pow(r,1.0/3.0);

	cout << "The radius of the cylindrical rod is " << r3 << " inches." << endl;

	return(0);
}
/*********************************************************************************/
