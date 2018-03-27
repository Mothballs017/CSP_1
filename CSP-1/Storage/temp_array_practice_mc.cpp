/*********************************************************************************/
/*** Title: temp_array_practice_mc.cpp								 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 20, 2018                                                      ***/
/*** Description: Using Array to Print and Average Numbers		               ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	const int LENGTH=8;
	int arr[LENGTH];
	int sum=0;
	srand(time(NULL));
	for(int i=0; i<LENGTH; i++){
		int num= rand();
		arr[i]=num;
		sum+=num;
		cout << num << endl;
	}
	cout << "Average = " << sum/LENGTH << endl;
	return (0);
}
/*********************************************************************************/
