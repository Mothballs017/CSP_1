/*********************************************************************************/
/*** Title: surface_area_cylinder_mc.cpp							 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 15, 2018                                                        ***/
/*** Description: Calculating Surface Area of a Cylinder		               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

float surfarea(float r, float l){
	float sa = 2*M_PI*r*l;
	return sa;
}

int main(){
	float radius=56.67;
	float length=7.25;
	float area=surfarea(radius,length);
	cout << area << endl;
	return(0);
}
/*********************************************************************************/
