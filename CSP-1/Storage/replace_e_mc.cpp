/*********************************************************************************/
/*** Title: replace_e_mc.cpp												   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 12, 2018                                                      ***/
/*** Description: Replace E With X											   ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	string sentence;
	cout << "Enter a sentence: \n";
	getline(cin, sentence);
	int ssize;
	char tmp;
	ssize=sentence.length();
	for(int i=0;i<ssize;i++){
		tmp = sentence.at(i);
		if(tmp=='e')
			sentence.replace(i,1,"x");
		if(tmp=='E')
			sentence.replace(i,1,"X");
	}
	cout << sentence << endl;
	return 0;
}
/*********************************************************************************/
