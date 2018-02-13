/*********************************************************************************/
/*** Title: rand_effectiveness_mc.cpp										   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 13, 2018                                                        ***/
/*** Description: Counting Random Percentage	                               ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	int zerocount=0;
	int onecount=0;
	int twocount=0;
	int threecount=0;
	int fourcount=0;
	int fivecount=0;
	int sixcount=0;
	int sevencount=0;
	int eightcount=0;
	int ninecount=0;
	int iterations=10000;
	int count=1;
	srand(time(NULL));
	while(count<iterations){
		int num=(rand()%10);
		if(num==0)
			zerocount++;
		if(num==1)
			onecount++;
		if(num==2)
			twocount++;
		if(num==3)
			threecount++;
		if(num==4)
			fourcount++;
		if(num==5)
			fivecount++;
		if(num==6)
			sixcount++;
		if(num==7)
			sevencount++;
		if(num==8)
			eightcount++;
		if(num==9)
			ninecount++;
		count++;
	}
	cout << left << setw(5) << "Zero" << " : " << setw(3) << zerocount << " : " << fixed << setprecision(2) << setw(5) << ((float)zerocount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "One" << " : " << setw(3) << onecount << " : " << fixed << setprecision(2) << setw(5) <<((float)onecount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Two" << " : " << setw(3) << twocount << " : " << fixed << setprecision(2) << setw(5) <<((float)twocount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Three" << " : " << setw(3) << threecount << " : " << fixed << setprecision(2) << setw(5) <<((float)threecount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Four" << " : " << setw(3) << fourcount << " : " << fixed << setprecision(2) << setw(5) <<((float)fourcount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Five" << " : " << setw(3) << fivecount << " : " << fixed << setprecision(2) << setw(5) <<((float)fivecount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Six" << " : " << setw(3) << sixcount << " : " << fixed << setprecision(2) << setw(5) <<((float)sixcount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Seven" << " : " << setw(3) << sevencount << " : " << fixed << setprecision(2) << setw(5) <<((float)sevencount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Eight" << " : " << setw(3) << eightcount << " : " << fixed << setprecision(2) << setw(5) <<((float)eightcount*100)/iterations << "%" << endl;
	cout << left << setw(5) << "Nine" << " : " << setw(3) << ninecount << " : " << fixed << setprecision(2) << setw(5) <<((float)ninecount*100)/iterations << "%" << endl;

	return (0);
}
