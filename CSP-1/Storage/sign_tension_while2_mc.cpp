/*********************************************************************************/
/*** Title: sign_tension_while2_mc.cpp										   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 13, 2018                                                        ***/
/*** Description: Sign Tension of While Loop 2	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	float tension, x=1.0;
	float weight=100.0; //lbs
	float pL=6.0; //ft
	float pC=6.0; //ft
	float min=weight*pL*pC;
	float optx;
	const float top=5.0;
	while(x<=top){
		tension = (weight*pL*pC)/(x*sqrt((pL*pC)-pow(x,2)));
		if(tension >= min){
			x+=0.1;
			continue;
		}
		if(tension < min){
			min=tension;
			optx = x;
		}
		if(x==top)
			break;
		x+=0.1;
	}
	cout << "The optimal tension is " << min << endl;
	cout << "The optimal distance is " << optx << endl;
	return (0);
}
/*********************************************************************************/
