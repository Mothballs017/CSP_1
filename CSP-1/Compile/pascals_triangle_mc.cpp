/*********************************************************************************/
/*** Title: pascals_triangle_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 27, 2018                                                      ***/
/*** Description: Finding Max Value in 2D Array					               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
	const int SIZE=11;
	int triangle[SIZE][SIZE];
	//fill in 2d array with 0s
	for(int n=0;n<SIZE;n++)
		for(int r=0;r<SIZE;r++)
			triangle[n][r]=0;
	//calculate Pascal's triangle
	for(int n=0;n<SIZE;n++){
		//first number needed for calculation (1)
		triangle[n][0]=1;
		for(int r=1;r<=n;r++){
			//formula
			triangle[n][r]=triangle[n-1][r]+triangle[n-1][r-1];
		}
	}
	for(int n=0;n<SIZE;n++){
		for(int r=0;r<SIZE;r++){
			if(r==SIZE-1)
				cout << setw(3) << triangle[n][r];
			else
				cout << setw(3) << triangle[n][r] << ", ";
		}
		cout << "\n";
	}
	cout << "\nA committee of 8 can be selected from a group of 10 people " << triangle[10][8] << " times.";
	return 0;
}
