/*********************************************************************************/
/*** Title: Battleship_mc.cpp										 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 29, 2018                                                      ***/
/*** Description: Battleship Game								               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctime>

using namespace std;

/* 7x7 grid
 * Destroyer : 2 pos
 * Submarine : 3 pos
 * Battleship: 4 pos
 */

char pocean[7][7];
char docean[7][7];
int d1,d2,s1,s2,b1,b2;

void Draw(){
	char y[7]={'A','B','C','D','E','F','G'};
	int letter=0;
	cout << "  | 1 | 2 | 3 | 4 | 5 | 6 | 7 |" << endl;
	for(int i=0;i<15;i++){
		if(i%2==0 || i==0)
			cout << "--+---+---+---+---+---+---+---+" << endl;
		if(i%2==1){
			cout << y[letter] << " | ";
			for(int m=0;m<7;m++){
				cout << docean[letter][m] << " | ";
			}
			cout << "\n";
			letter++;
		}
	}
}

void PlaceShip(){
	srand(time(NULL));
	while()
}

int main(){
	for(int i=0;i<7;i++)
		for(int k=0;k<7;k++){
			docean[i][k]=' ';
			pocean[i][k]='M';
		}
	Draw();
	PlaceShip();
	return 0;
}
