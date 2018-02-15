/*********************************************************************************/
/*** Title: torque_mc.cpp											 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 15, 2018                                                        ***/
/*** Description: Calculating torque							               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void Torque(double, double, double);

int main(){
	double r=20; //m or ft
	double F=40; //N or lbf
	double theta=63; //radians
	double T;
	cout <<
	return(0);
}

void Torque(double dist, double force, double angle){
	angle=angle*(M_PI/180);
	T=dist*force*sin(angle);
	return T;
}
