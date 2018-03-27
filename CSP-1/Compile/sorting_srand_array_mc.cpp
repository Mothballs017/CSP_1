/*********************************************************************************/
/*** Title: sorting_srand_array_mc.cpp										   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 23, 2018                                                      ***/
/*** Description: Sorting Array of Random Values(1-100)                        ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	const int OUT=1000;
	float arr[OUT];
	srand(time(NULL));
	int less=0,greater=0;
	cout << "Numbers between 1-50:" << endl;
	for(int i=0; i<OUT; i++){
		arr[i]=(rand()%100)+1;
		if(arr[i]<=50){
			cout << arr[i] << endl;
			less++;
		}
	}
	cout << "\nNumbers greater than 50:" << endl;
	for(int i=0; i<OUT; i++)
		if(arr[i]>50){
			cout << arr[i] << endl;
			greater++;
		}
	cout << "Less than 50: " << less << "   |   Greater than 50: " << greater << endl;
	return 0;
}
/*********************************************************************************/
