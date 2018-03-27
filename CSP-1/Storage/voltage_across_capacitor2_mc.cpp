/*********************************************************************************/
/*** Title: voltage_across_capacitor2_mc.cpp								   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 23, 2018                                                      ***/
/*** Description: Measuring Voltage Across Capacitor                           ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float E=50.0; //volts
	float R=4000.0; //ohms
	float C=0.005; //farads
	float e=2.71828; //e
	for(float t=0; t<60+1;t+=2){
		float V =E*(1-pow(e,-t/(R*C)));
		cout << t << ": " << V << endl;
	}
	return 0;
}
/*********************************************************************************/




