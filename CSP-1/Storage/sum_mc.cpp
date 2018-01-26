/*********************************************************************************/
/*** Title: sum_mc.cpp														   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 23, 2018                                                        ***/
/*** Description: Homework Project Using Sum	                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n = 1000;
	int a = 100;
	int d = 1;
	int sum = (n/2)*(2*a+(d*(n-1))); //original answer: 5050
	cout << "Answer: " << sum << endl;
	return(0);
}
