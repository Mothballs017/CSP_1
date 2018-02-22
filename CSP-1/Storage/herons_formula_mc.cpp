/*********************************************************************************/
/*** Title: herons_formula_mc.cpp	 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 20, 2018														   ***/
/*** Description: Calculating Heron's Formula								   ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float Heron(float,float,float);

int main(){
	float a=3;
	float b=4;
	float c=5;
	cout << Heron(a,b,c) << endl;
}

float Heron(float a, float b, float c){
	float A;
	float s=((a+b+c)/2.0);
	float rt=s*(s-a)*(s-b)*(s-c);
	if(rt<0)
		A=-1;
	else
		A=sqrt(rt);
	return A;
}
