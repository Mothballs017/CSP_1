/*********************************************************************************/
/*** Title: voltage_across_capacitor_mc.cpp									   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 23, 2018                                                        ***/
/*** Description: Measuring Voltage Across Capacitor                           ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float E=12.0; //volts
	float R=10.0; //ohms
	float C=0.5; //farads
	float t=0.31; //secs
	float e=2.71828; //e
	float i =(E/R)*pow(e,(-t/(R*C)));
	cout << i << endl;
	return 0;
}
/*********************************************************************************/
