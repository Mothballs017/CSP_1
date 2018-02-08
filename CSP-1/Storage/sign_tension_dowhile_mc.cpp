/*********************************************************************************/
/*** Title: sign_tension_dowhile_mc.cpp								 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 8, 2018                                                         ***/
/*** Description: Calculating Tension Using Do While Loops  		           ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float tension, x=1.0;
	float weight=100.0; //lbs
	float pL=6.0; //ft
	float pC=6.0; //ft
	float min=weight*pL*pC;
	float optx;
	do{
		tension = (weight*pL*pC)/(x*sqrt((pL*pC)-pow(x,2)));
		if(tension < min){
			min=tension;
			optx = x;
		}
		cout << tension << endl;
		x+=0.1;
	}while(x<=5.0);
	cout << "The optimal tension is " << min << endl;
	cout << "The optimal distance is " << optx << endl;
	return (0);
}
