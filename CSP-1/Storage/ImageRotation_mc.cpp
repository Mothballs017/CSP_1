/*********************************************************************************/
/*** Title: ImageRotation_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 1, 2018                                                         ***/
/*** Description: Converting Polar <-> Rectangular Coordinates                 ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

	float height, width, angle;

	cout << "Enter the Width of the Image: ";
	cin >> width;
	cout << "Enter the Height of the Image: ";
	cin >> height;
	cout << "Enter the Angle of Rotation: ";
	cin >> angle;

	float Cx0 = 0;
	float Cy0 = 0;
	float Cx1 = width;
	float Cy1 = 0;
	float Cx2 = width;
	float Cy2 = height;
	float Cx3 = 0;
	float Cy3 = height;
	float tmpx0, tmpy0, tmpx1, tmpy1, tmpx2, tmpy2, tmpx3, tmpy3;
	float Dx0, Dy0, Dx1, Dy1, Dx2, Dy2, Dx3, Dy3;

	Dx0 = sqrt(pow(Cx0,2.0)+pow(Cy0,2.0));
	Dy0 = atan2(Cy0, Cx0)*180.0/M_PI;
	Dx1 = sqrt(pow(Cx1,2.0)+pow(Cy1,2.0));
	Dy1 = atan2(Cy1, Cx1)*180.0/M_PI;
	Dx2 = sqrt(pow(Cx2,2.0)+pow(Cy2,2.0));
	Dy2 = atan2(Cy2, Cx2)*180.0/M_PI;
	Dx3 = sqrt(pow(Cx3,2.0)+pow(Cy3,2.0));
	Dy3 = atan2(Cy3, Cx3)*180.0/M_PI;

	tmpx0 = Dx0;
	tmpy0 = Dy0;
	tmpx1 = Dx1;
	tmpy1 = Dy1;
	tmpx2 = Dx2;
	tmpy2 = Dy2;
	tmpx3 = Dx3;
	tmpy3 = Dy3;


	//V-this is the problem area. somehow the conversion goes wrong here

//	Dx0 = tmpx0*cos((tmpy0*M_PI/180.0)+angle);
//	Dy0 = tmpx0*sin((tmpy0*M_PI/180.0)+angle);
//	Dx1 = tmpx1*cos((tmpy1*M_PI/180.0)+angle);
//	Dy1 = tmpx1*sin((tmpy1*M_PI/180.0)+angle);
//	Dx2 = tmpx2*cos((tmpy2*M_PI/180.0)+angle);
//	Dy2 = tmpx2*sin((tmpy2*M_PI/180.0)+angle);
//	Dx3 = tmpx3*cos((tmpy3*M_PI/180.0)+angle);
//	Dy3 = tmpx3*sin((tmpy3*M_PI/180.0)+angle);

	cout << fixed << setprecision(2) << "\n\nC0(" << Cx0 << ", " << Cy0 << ") --> D0(" << Dx0 << ", " << Dy0 << ")";
	cout << "\nC1(" << Cx1 << ", " << Cy1 << ") --> D1(" << Dx1 << ", " << Dy1 << ")";
	cout << "\nC2(" << Cx2 << ", " << Cy2 << ") --> D2(" << Dx2 << ", " << Dy2 << ")";
	cout << "\nC3(" << Cx3 << ", " << Cy3 << ") --> D3(" << Dx3 << ", " << Dy3 << ")";
	return 0;
}

