/*********************************************************************************/
/*** Title: sign_tension_for_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 8, 2018                                                         ***/
/*** Description: Calculating Tension Using For Loops              			   ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float tension;
	float weight=100.0; //lbs
	float pL=6.0; //ft
	float pC=6.0; //ft
	float min=weight*pL*pC;
	float tmpx;
	for(float x=1.0;x<=5.0;x+=0.1){
		tension = (weight*pL*pC)/(x*sqrt((pL*pC)-pow(x,2)));
		if(tension < min){
			min=tension;
			tmpx = x;
		}
		cout << tension << endl;
		x+=0.1;
	}
	cout << "The optimal tension is " << min << endl;
	cout << "The optimal distance is " << tmpx << endl;
	return (0);
}
