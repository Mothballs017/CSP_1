/***************************************************/
/*** Title: Prog_9.8.cpp                         ***/
/*** Description: Phantom Newline                ***/
/***************************************************/
#include <iostream>

using namespace std;

int main(void)
{
	int value;
	string message;

	cout << "Enter a number: ";
	cin >> value;
	cin.ignore();
	cout << "The number entered is: " << value << endl;

	cout << "Enter a text: ";
	getline(cin, message);
	cout << "The text message is: "<< message << endl;

	return(0);
}
/***************************************************/

