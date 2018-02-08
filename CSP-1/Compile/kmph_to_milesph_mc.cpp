/*********************************************************************************/
/*** Title: kmph_to_milesph_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 8, 2018                                                         ***/
/*** Description: Converting Km/h to Miles/h								   ***/
/*********************************************************************************/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	float startkm=60.0; //kmph
	float increment=5.0; //kmph
	float mile; //mph
	cout << fixed << setprecision(2) << setw(20) << "Kilometers per Hour" << setw(3) << "|" << setw(18)<< "Miles per Hour" << endl;
	for(int x=0; x<10; x++){
		mile=startkm*0.6241;
		cout << setw(14) << startkm << setw(9) << "|" << setw(14) << mile << endl;
		startkm+=increment;
	}
	return (0);
}
