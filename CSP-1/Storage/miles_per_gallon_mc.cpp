/*********************************************************************************/
/*** Title: miles_per_gallon_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 17, 2018                                                      ***/
/*** Description: Using Pointers to Calculate MPG	                       	   ***/
/*********************************************************************************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	float miles[10]={240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3};
	float gallons[10]={10.3,15.6,8.7,14,16.3,15.7,14.9,10.7,8.3,8.4};
	float mpg[10];
	for(int i=0;i<10;i++){
		*(mpg+i)=*(miles+i)/ *(gallons+i);
		cout << *(mpg+i) << endl;
	}
	return 0;
}
/*********************************************************************************/
