/********************************************************************/
/*** Title: eclipse_IO_Demo.cpp                                   ***/
/*** Course: Computational Problem Solving CPET-121               ***/
/*** Developer: JTSchueckler                                      ***/
/*** Data: 19Mar18                                                ***/
/*** Description: A program designed to demonstrate the input and ***/
/***              output limitations of the eclipse debugger.     ***/
/********************************************************************/
#include <iostream>

using namespace std;

int main(void)
{
	float userInput1, userInput2, divisor = 23.457, result;
	// Request two values from the user.
	cout << "Input the first value = "; cin >> userInput1;
	cout << "Input the second value = "; cin >> userInput2;

//	userInput1 = 12.3;
//	userInput2 = 56.7;
		// These assignments of the input variables is required by eclipse.
		// Eclipse does NOT support cin.

	result = (userInput1 * userInput2) / divisor;

	cout << "The first input is: "	<< userInput1;
	cout << "\nThe second input is: " << userInput2 << endl;
		// This endl flushes the buffer required by eclipse
	cout << "\n\nThe calculated value is:  = " << result << endl;

	return (0);
}






