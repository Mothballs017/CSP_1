/*********************************************************************************/
/*** Title: rates_mc.cpp													   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 17, 2018                                                      ***/
/*** Description: Using Pointers to Display Arrays	                       	   ***/
/*********************************************************************************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void Show(float *rates){
	for(int i=0;i<9;i++)
//		cout << *(rates+i) << endl;
		cout << *rates++ << endl;
}

int main(void)
{
	float rates[9]={6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0};
	Show(rates);
	return 0;
}
/*********************************************************************************/
