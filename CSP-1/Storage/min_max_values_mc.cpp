/*********************************************************************************/
/*** Title: min_max_values_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 20, 2018                                                      ***/
/*** Description: Finding Min/Max Using Arrays					               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

int main(){
	const int SLOPENUM=9;
	float slopes[SLOPENUM]= {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	float min=slopes[0],max=slopes[0];
	int posmin=0,posmax=0;
	for(int i=0; i<SLOPENUM; i++){
		if(slopes[i] <= min){
			min=slopes[i];
			posmin=i;
		}
		if(slopes[i] > max){
			max=slopes[i];
			posmax=i;
		}
	}
	cout << "Min Value = " << min << " @ location " << posmin << endl;
	cout << "Max Value = " << max << " @ location " << posmax << endl;
	return (0);
}
