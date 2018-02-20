/*********************************************************************************/
/*** Title: main-square-cube_mc.cp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 20, 2018                                                        ***/
/*** Description: Calculating Surface Area of a Cylinder		               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include "func-square-cube_mc.h"

using namespace std;

int main(){
	float input;
	float input_squared;
	float input_cubed;

	cout << "Enter A Value: "; cin >> input;

	input_squared = Sqr_Cube(input, input_cubed);

	cout << fixed << setprecision(2);
	cout << "Input Squared : " << setw(6) << input_squared << endl;
	cout << "Input Cubed   : " << setw(6) << input_cubed << endl;

	return (0);
}
