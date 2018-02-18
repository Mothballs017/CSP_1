/*********************************************************************************/
/*** Title: torque_mc.cpp											 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 15, 2018                                                        ***/
/*** Description: Calculating Torque							               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void Torque(double&, double&, double&);

int main(){
	double T=40; //m or ft
	double F=16; //N or lbf
	double theta=293; //radians
	Torque(T,F,theta);
	cout << T << endl;
	return(0);
}

void Torque(double& dist, double& force, double& angle){
	angle=angle*(M_PI/180);
	dist=dist*force*sin(angle);
}
/*********************************************************************************/
