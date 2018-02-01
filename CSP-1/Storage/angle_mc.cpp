/*********************************************************************************/
/*** Title: angle_mc.cpp													   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 30, 2018                                                        ***/
/*** Description: Determining Type of Angle		                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int angle;
	cout << "Enter an angle: ";
	cin >> angle;
	if(angle == 90)
			cout << "\nAngle is right angle" << endl;
	if(angle < 90)
			cout << "\nAngle is acute angle" << endl;
	if(angle > 90)
			cout << "\nAngle is obtuse angle" << endl;
	return 0;
	}
}
/*********************************************************************************/
