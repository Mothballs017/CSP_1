//===============================================================
// Name        : Dynamic_Memory_V1.cpp
// Author      : GHZ
// Description : Dynamic Allocation of Arrays
//===============================================================
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float *x;	// create a pointer (x) to a float variable
	int size;	// the size of the array

	// determine the size of the array
	cout << "Array Size? : ";
	cin >> size;

	// allocates 'size' consecutive memory locations to hold
	// float variables and x points to the first location
	x = new float[size];

	// reads in 'size' float numbers
	for (int i=0; i<size; i++)
	{
		cout << "Number: ";
//		cin >> x[i];
		cin >> *(x+i);
	}

	// print out the 'size' float numbers
	for (int i=0; i<size; i++)
//		cout << x[i] << "; ";
		cout << *(x+i) << "; ";

	// de-allocate the memory locations starting at x
	delete[] x;

	return (0);
}
