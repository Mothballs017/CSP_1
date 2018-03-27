/********************************************************************/
/*** Title: eclipseDebuggerDemo.cpp                               ***/
/*** Course: Computational Problem Solving CPET-121               ***/
/*** Developer: JTSchueckler                                      ***/
/*** Data: 5MAr18                                                 ***/
/*** Description: A nested loop program to demonstrate some       ***/
/***              of the eclipse debugger features.               ***/
/********************************************************************/

#include <iostream>

using namespace std;

float AddCounters (int, int, int, float&);

int main(void)
{
	int countUp = 1, countDown = 2, sum;
	float modSum;
	char displayLoop;
	for (displayLoop = 'A'; displayLoop < 'C'; ++displayLoop)
	// Runs the entire program 2 times Loop A & B.
	// This is the outer loop.
	{
		cout << "\n THIS IS for LOOP " << displayLoop << "\n" << endl;
		while (countUp <= 2)
		// loops while countUp is <=2. This is the middle loop.
		{
			cout << countUp << " -->  " << endl;
			do
				{
					cout << "      " << countDown << endl;
					--countDown;
				} while (countDown != -1);
			// loops while countDown is NOT = 0. This is the inner loop.

			cout << endl;
			countDown = 2;
			++countUp;
		}

		countUp = 1;
		countDown = 2;
	}
	cout << "\n \n" << endl;
//	cout << displayLoop << " " << countUp << " " << countDown << endl;
	sum = AddCounters (displayLoop, countUp, countDown, modSum);
	cout << "The sum of the counters is = "	<< sum
		 << "\n\nThe modified sum is = " << modSum << endl;

	return (0);
}

float AddCounters (int loop, int upC, int dnC, float& chgSum)
{
	int total;
	total = loop + upC + dnC;
	chgSum = total / 0.2345;
	return (total);
}
