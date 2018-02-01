/*********************************************************************************/
/*** Title: input_sort_mc.cpp												   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 30, 2018                                                        ***/
/*** Description: Determining Type of Angle		                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int numa, numb, numc;
	int low, med, high;
	cout << "Enter the first number: ";
	cin >> numa;
	cout << "Enter the second number: ";
	cin >> numb;
	cout << "Enter the third number: ";
	cin >> numc;
	if(numa > numb){
		med = numa;
		low = numb;
	}else{
		med = numb;
		low = numa;
	}
	if(med > numc){
		high = med;
		if(low > numc){
			med = low;
			low = numc;
		}else{
			med = numc;
		}
	}else high =  numc;
	cout << low << ", " << med << ", " << high << endl;
	return 0;
}
/***********************************************************************************/
