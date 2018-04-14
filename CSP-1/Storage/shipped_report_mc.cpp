/*********************************************************************************/
/*** Title: shipped_report_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 12, 2018                                                      ***/
/*** Description: Read dat File and Produce Report							   ***/
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
	ifstream inFile;
	inFile.open("shipped.dat");
	string report[5][6], line[5];
	for(int i=0;i<5;i++){
		getline(inFile,line[i]);
		line[i].erase(9,10);
		cout << line[i] << endl;
	}
	return 0;
}
/*********************************************************************************/
