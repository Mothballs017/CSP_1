/*********************************************************************************/
/*** Title: mahattan_interest_mc.cpp 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 15, 2018														   ***/
/*** Description: Averange Test Results per Experiment						   ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
	float A;
	float P=24; //$
	float r=0.05; //%
	float t=50;
	for(int i=1;i<9;i++){
		A=P*pow(M_E,(r*(t*i)));
		cout << fixed << setprecision(2) << "Money after " << t*i << " years: $" << A << endl;
	}
	return(0);
}
