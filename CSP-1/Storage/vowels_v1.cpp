/*********************************************************************************/
/*** Title: vowels_v1.cpp													   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 12, 2018                                                      ***/
/*** Description: Counting Vowels In a String								   ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	string my_str = "The quick brown fox jumps over the lazy hamster";
	int str_size;
	int vowel_cnt = 0;
	char temp;

	str_size = my_str.length();

	for (int i = 0; i < str_size; i++)
	{
		temp = my_str.at(i);
		temp = tolower(temp);

		if ((temp == 'a') || (temp == 'e') || (temp == 'i') ||
			(temp == 'o') || (temp == 'u'))
			vowel_cnt++;
	}

	cout << vowel_cnt << " vowels in the message <"
		 << my_str << ">" << endl;

	return 0;
}
