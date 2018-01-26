/*********************************************************************************/
/*** Title: combined_resistance_mc.cpp										   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 25, 2018                                                        ***/
/*** Description: Combined Resistor Resistance	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float R1=1000.0;
	float R2=1000.0;
	float R3=1000.0;
	float CR;
	CR=1/((1/R1)+(1/R2)+(1/R3));
	cout << CR << endl;
	return 0;
}

/*********************************************************************************/

