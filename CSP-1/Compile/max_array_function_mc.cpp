/***************************************************************/
/*** Title: max-array-function.cpp                           ***/
/*** Course: Computational Problem Solving CPET-121          ***/
/*** Developer: Dr G.H. Zion                                 ***/
/*** Data: Spring 2018                                       ***/
/*** Description: Find the Max values & locations w/Function ***/
/***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int const SIZE = 10;

int Max_Value_In_Array(int[], int&);

int main(void)
{

	int data_set[SIZE] = { 12, 23, 34, 45, 10, 67, 78, 89, 21, 32 };

	int max_value, max_locale;

	max_value = Max_Value_In_Array(data_set, max_locale);

	cout << "Max Value = " << fixed << setprecision(2) << max_value
		 << " @ location " << max_locale << "\n" << endl;

	for (int i = 0; i < SIZE; i++)
		cout << data_set[i] << ", ";
	cout << endl;

	return (0);
}

int Max_Value_In_Array(int data[], int& local)
{
	int min;

	min = data[0];
	local = 0;

	for (int i = 1; i < SIZE; i++)
	{
		if (data[i] < min)
		{
			min = data[i];
			local = i;
		}
	}
	return (min);
}
/***************************************************************/

