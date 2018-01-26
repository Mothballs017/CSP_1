/*********************************************************************************/
/*** Title: distance_mc.cpp													   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 23, 2018                                                        ***/
/*** Description: Distance Between Coordinates	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)
{
//	float x1 = -12.0;
//	float x2 = 22.0;
//	float y1 = -15.0;
//	float y2 = 5.0;
	float x1,x2,y1,y2;
	cout << "Enter a value for x1 : ";
	cin >> x1;
	cout << "Enter a value for x2 : ";
	cin >> x2;
	cout << "Enter a value for y1 : ";
	cin >> y1;
	cout << "Enter a value for y2 : ";
	cin >> y2;
	float distance = sqrt((pow((x2-x1),2)+(pow((y2-y1),2)))); // original answer: 5
	cout << fixed << setprecision(2) << right;
	cout << setw(8) << distance << endl;
	return(0);
}
