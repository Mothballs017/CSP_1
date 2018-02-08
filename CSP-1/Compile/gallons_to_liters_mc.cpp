/*********************************************************************************/
/*** Title: gallons_to_liters_mc.cpp								 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 8, 2018                                                         ***/
/*** Description: Converting Gallons to Liters				  		           ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float gallon=10.0;
	float liter;
	while(gallon<=20){
		liter=gallon*3.785;
		cout << gallon << " gallons = " << liter << " liters" << endl;
		gallon+=1.0;
	}
	return (0);
}
