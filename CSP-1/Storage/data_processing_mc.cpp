/*********************************************************************************/
/*** Title: data_processing_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 10, 2018                                                      ***/
/*** Description: Data Processing Using File Streams                           ***/
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
	int nums[18];
	ifstream inFile;
	inFile.open("numbers.dat");
	if(inFile.fail())
		exit(1);
	for(int i=0;i<18;i++){
		inFile >> nums[i];
	}
	for(int i=0;i<18;i++){
		if(nums[i]<10){
			int sum=0;
			for(int k=i+1; k<nums[i]+i+1;k++)
				sum+=nums[k];
			cout << "Average of group " << nums[i] << " = " << sum/nums[i] << endl;
		}
	}
	inFile.close();
	return 0;
}
