/*********************************************************************************/
/*** Title: circuit_array_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 20, 2018                                                      ***/
/*** Description: Creating a Table of Voltage, Current, and Power Values       ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	const int VAL=5;
	float resistance[VAL]={16,27,39,56,81};
	float current[VAL], power[VAL];
	float Rsum=0,Csum=0,Psum=0;
	for(int i=0; i<VAL; i++){
		cout << "Please enter a value for current";
		cin >> current[i];
		power[i]=resistance[i]*pow(current[i],2);
	}
	cout << "Resistance   | Current      | Power" << endl;
	for(int i=0; i<VAL; i++){
		Rsum+=resistance[i];
		Csum+=current[i];
		Psum+=power[i];
		cout << resistance[i] << "           | " << current[i] << "           | " << power[i] << endl;
	}
	cout << "Total: " << Rsum << "   | " << Csum << "          | " << Psum << endl;
	return (0);
}
