/*********************************************************************************/
/*** Title: uppercase_vowels_mary_mc.cpp									   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 10, 2018                                                      ***/
/*** Description: Reading/Writing Mary Text File                               ***/
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
	ifstream inFile;
	inFile.open("mary.txt");
	ofstream outFile;
	outFile.open("mary_changed.txt");

	char data;

	inFile.get(data);
	while(!(inFile.eof())){
		if(data=='a'||data=='e'||data=='i'||data=='o'||data=='u')
			data=toupper(data);
		outFile.put(data);
		inFile.get(data);
	}
	inFile.close();
	outFile.close();
	return 0;
}
