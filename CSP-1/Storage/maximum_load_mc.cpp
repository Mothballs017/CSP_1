/*********************************************************************************/
/*** Title: maximum_load_mc.cpp												   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 23, 2018                                                        ***/
/*** Description: Maximum Load on a Wooden Beam	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float S=3000.0; //lb/in^2
	float b=3.0; //in 2.0
	float h=6.0; //in 4.0
	float d=8.0*12.0; //in conversion
	float c=h/2.0; //in
	float I = (b*(pow(h,3)))/12.0; //in^4
	float L = (S*I)/(d*c);
	cout << "Maximum weight is " << L << endl; //166.667
	return 0;
}
/*********************************************************************************/
