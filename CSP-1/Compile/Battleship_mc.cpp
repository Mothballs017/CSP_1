/*********************************************************************************/
/*** Title: Battleship_mc.cpp										 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 29, 2018                                                      ***/
/*** Description: Battleship Game								               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

/* 7x7 grid
 * Destroyer : 2 pos
 * Submarine : 3 pos
 * Battleship: 4 pos
 */

char pocean[7][7];
char docean[7][7];
int destroyer=2,submarine=3,battleship=4;

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

void PlaceShip(int ship){
	srand(time(NULL));

//	cout << "working" << endl;
//	srand(time(NULL));
//	bool empty=true;
//	int direction=rand()*4;
//	while(empty!=false){
//		cout << "loop";
//		int row=rand()*7; int col=rand()*7;
//		char spot=docean[row][col];
//		if(spot=='H')
//			continue;
//		if(spot=='M'){
//			cout << "M";
//			if(direction==0){
//				if(row==0)
//					continue;
//				int clear=0;
//				for(int i=row;i>row-ship;i--){
//					if(docean[i][col]=='H')
//						clear=1;
//				}
//				if(clear==0)
//					for(int i=row;i>row-ship;i--){
//						docean[i][col]='H';
//						empty=false;
//					}
//				else if(clear==1)
//					direction=rand()*4;
//			}
//			if(direction==1){
//				if(col==6)
//					continue;
//				int clear=0;
//				for(int i=col;i<col+ship;i++){
//					if(docean[row][i]=='H')
//						clear=1;
//				}
//				if(clear==0)
//					for(int i=col;i<col+ship;i++){
//						docean[row][i]='H';
//						empty=false;
//					}
//				else if(clear==1)
//					direction=rand()*4;
//			}
//			if(direction==2){
//				if(row==6)
//					continue;
//				int clear=0;
//				for(int i=row;i<row+ship;i++){
//					if(docean[row][i]=='H')
//						clear=1;
//				}
//				if(clear==0)
//					for(int i=row;i<row+ship;i++){
//						docean[row][i]='H';
//						empty=false;
//					}
//				else if(clear==1)
//					direction=rand()*4;
//			}
//			if(direction==3){
//				if(col==0)
//					continue;
//				int clear=0;
//				for(int i=col;i>col-ship;i--){
//					if(docean[row][i]=='H')
//						clear=1;
//				}
//				if(clear==0)
//					for(int i=col;i>col-ship;i--){
//						docean[row][i]='H';
//						empty=false;
//					}
//				else if(clear==1)
//					direction=rand()*4;
//			}
//		}
//	}
}


int main(){
	for(int i=0;i<7;i++)
		for(int k=0;k<7;k++){
			docean[i][k]=' ';
			pocean[i][k]='M';
		}
	Draw();
	PlaceShip(destroyer);
	PlaceShip(submarine);
	PlaceShip(battleship);
	for(int i=0;i<7;i++)
		for(int k=0;k<7;k++){
			docean[i][k]=pocean[i][k];
		}
	Draw();
	return 0;
}
