/*********************************************************************************/
/*** Title: equivduct_mc.cpp										 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 20, 2018                                                        ***/
/*** Description: Calculating Diameter of Duct From Width & Height             ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

double EquivDuct(double, double);

int main(){
	double diameter;
	int ctr=0;
	cout << "       Width    Height   Circular" << endl;
	cout << "       -----    ------   --------" << endl;
	for(int i=0; i<4; i++){
		double width=5; //mm or in
		width+=i;
		for(int k=0; k<6; k++){
			double height=10; //mm or in
			ctr++;
			height+=k;
			diameter=EquivDuct(width,height);
			cout << fixed << setprecision(3) << "# " << right << setw(2) << ctr << ":  "
					<< width << "    " << height << "   " << setw(6) << diameter << endl;
		}
		cout << "--------------------------------" << endl;
	}
	return (0);
}

double EquivDuct(double a, double b){
	double d=(1.3*pow(a*b,0.625))/pow(a+b,0.25);
	return d;
}
