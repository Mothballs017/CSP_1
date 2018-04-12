/*********************************************************************************/
/*** Title: vowels_v2_mc.cpp												   ***/
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
	cout << "Enter a line: \n";
	getline(cin, my_str);
	int str_size;
//	int vowel_cnt = 0;
	int vowel_cnt[5] = {0,0,0,0,0};
	char temp;

	str_size = my_str.length();

	for (int i = 0; i < str_size; i++)
	{
		temp = my_str.at(i);
		temp = tolower(temp);

//		if ((temp == 'a') || (temp == 'e') || (temp == 'i') ||
//			(temp == 'o') || (temp == 'u'))
//			vowel_cnt++;
		switch(temp){
		case 'a': vowel_cnt[0]++;
				break;
		case 'e': vowel_cnt[1]++;
				break;
		case 'i': vowel_cnt[2]++;
				break;
		case 'o': vowel_cnt[3]++;
				break;
		case 'u': vowel_cnt[4]++;
				break;
		default: break;
		}

	}

//	cout << vowel_cnt << " vowels in the message <"
//		 << my_str << ">" << endl;
	cout << "A = " << vowel_cnt[0] << endl;
	cout << "E = " << vowel_cnt[1] << endl;
	cout << "I = " << vowel_cnt[2] << endl;
	cout << "O = " << vowel_cnt[3] << endl;
	cout << "U = " << vowel_cnt[4] << endl;

	return 0;
}
