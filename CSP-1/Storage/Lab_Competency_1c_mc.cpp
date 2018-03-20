/*********************************************************************************/
/*** Title: Lab_Competency_1c_mc.cpp								 		   ***/
/*** Course: Computational Problem Solving CPET-121 Section 3				   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 8, 2018                                                       ***/
/*** Description: Lab Competency 1c								               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

int main(){
	bool gameOver=false;
	while(gameOver!=true){
		char card,again;
		int value=0, total=0;
		for(int i=0; i<5; i++){
			cout << "Enter a card: ";
			cin >> card;
			switch(card){
			case 'A':
			case 'a':
				value=1;
				break;
			case '2': case '3':	case '4': case '5': case '6': case '7': case '8': case '9':
				value=5;
				break;
			case 'J': case'j': case 'Q': case 'q': case 'K': case 'k':
				value=10;
				break;
			default: cout << "Not a valid card" << endl; i--;
			}
			total+=value;
		}
		cout << "Total = " << total << endl;
		cout << "Do you want to run another five cards? (Y/N)";
		cin >> again;
		if(again=='Y' || again=='y')
			total=0;
		else
			gameOver=true;
	}
	return 0;
}
/*********************************************************************************/
