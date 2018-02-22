/*********************************************************************************/
/*** Title: TicTacToe-main-mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 22, 2018                                                        ***/
/*** Description: Tic Tac Toe Game (Without Arrays T_T)			               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
//#include "" name of header file

using namespace std;

char pos1='1';
char pos2='2';
char pos3='3';
char pos4='4';
char pos5='5';
char pos6='6';
char pos7='7';
char pos8='8';
char pos9='9';
char user='X';
char comp='O';
int position;

void Draw(){
	cout << "\n\n" << right << setw(16) << "Tic Tac Toe\n" << endl;
	cout << left << "User (X)  -  Computer (O)\n\n" << endl; // user char var and comp char var
	for(int i=0; i<10; i++){
		if(i==0 || i==3 || i==6 || i==9)
			cout << "     |     |     " << endl;
		if(i==1)
			cout << "  " << pos1 << "  |  " << pos2 << "  |  " << pos3 << "  " << endl;
		if(i==4)
			cout << "  " << pos4 << "  |  " << pos5 << "  |  " << pos6 << "  " << endl;
		if(i==7)
			cout << "  " << pos7 << "  |  " << pos8 << "  |  " << pos9 << "  " << endl;
		if(i==2 || i==5)
			cout << "_____|_____|_____" << endl;
	}
}

void InputCheck(){
	bool notValid=false;
	while(notValid!=true){
		cout << "Enter your position: ";
		cin >> position;
		if(position<1||position>9){
			cout << "Invalid input: the position indicator has to be in the range of 1 to 9" << endl;
			continue;
		}
		else
			notValid=true;
	}
}

void Available(){
	//add if statement to determine which letter is entered for which player and letter for opposing player
	bool isAvailable=false;
	while(isAvailable!=true){
		if(position==1){
			if(pos1==user || pos1==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos1='X';
				isAvailable=true;
			}
		}
		if(position==2){
			if(pos2==user || pos2==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos2='X';
				isAvailable=true;
			}
		}
		if(position==3){
			if(pos3==user || pos3==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos3='X';
				isAvailable=true;
			}
		}
		if(position==4){
			if(pos4==user || pos4==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos4='X';
				isAvailable=true;
			}
		}
		if(position==5){
			if(pos5==user || pos5==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos5='X';
				isAvailable=true;
			}
		}
		if(position==6){
			if(pos6==user || pos6==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos6='X';
				isAvailable=true;
			}
		}
		if(position==7){
			if(pos7==user || pos7==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos7='X';
				isAvailable=true;
			}
		}
		if(position==8){
			if(pos8==user || pos8==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos8='X';
				isAvailable=true;
			}
		}
		if(position==9){
			if(pos9==user || pos9==comp)
				cout << "Invalid input: position already occupied." << endl;
			else{
				pos9='X';
				isAvailable=true;
			}
		}
	}
}

bool CheckWinner(){
	if(pos1==pos2 && pos2==pos3 && pos3==pos1){

	}
}

int main(){
	cout << "Welcome to the game of Tic Tac Toe."
			"\nBelow you will indicate your position (1-9) as shown in the table." << endl;
	Draw();
	//while loop gameover!=true
//	InputCheck();
//	Available();
	//gameOver=CheckWinner
	return (0);
}




