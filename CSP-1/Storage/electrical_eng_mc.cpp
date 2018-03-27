/*********************************************************************************/
/*** Title: electrical_eng_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 22, 2018                                                      ***/
/*** Description: 3 Arrays in Electrical Eng					               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

const int LISTED=10;

void Calc_Volts(double volt[],double curr[],double resist[]){
	for(int i=0;i<LISTED;++i){
		volt[i]=curr[i]*resist[i];
	}
}

int main(){
	double current[LISTED]={10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98};
	double resistance[LISTED]={4,8.5,6,7.35,9,15.3,3,5.4,2.9,4.8,};
	double volts[LISTED];
	Calc_Volts(volts,current,resistance);
	for(int i=0;i<LISTED;i++){
		cout << volts[i] << endl;
	}
	return 0;
}
/*********************************************************************************/
