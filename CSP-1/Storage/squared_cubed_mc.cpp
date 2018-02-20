/*********************************************************************************/
/*** Title: squared_cubed_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 20, 2018                                                        ***/
/*** Description: Squared & Cubed								               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

float Sqr_Cube(float, float&);

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

float Sqr_Cube(float num, float& cube){
	float square;
	square = pow(num,2);
	cube = pow(num,3);
	return square;
}
