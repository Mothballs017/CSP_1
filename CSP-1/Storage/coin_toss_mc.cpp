/*********************************************************************************/
/*** Title: coin_toss_mc.cpp												   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 13, 2018                                                        ***/
/*** Description: Counting Heads and Tails		                               ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(void)
{
	int heads=0;
	int tails=0;
	srand(2);
	for(int i=0; i<1000;i++){
		int toss=(rand()%2);
		if(toss==0)
			heads++;
		if(toss==1)
			tails++;
	}
	cout << "Heads" << " : " << heads << endl;
	cout << "Tails" << " : " << tails << endl;
	return (0);
}
