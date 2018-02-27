/*********************************************************************************/
/*** Title: TicTacToe-main-mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 22, 2018                                                        ***/
/*** Description: Tic Tac Toe Game (Without Arrays T_T)			               ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include "GlobalVar-tictactoe-mc.h"
#include "Draw-tictactoe-mc.h"
#include "Available-tictactoe-mc.h"
#include "InputCheck-tictactoe-mc.h"
#include "ComputerTurn-tictactoe-mc.h"
#include "CheckWinner-tictactoe-mc.h"
#include "Marker-tictactoe-mc.h"
#include "First-tictactoe-mc.h"
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
char winner;
bool gameOver=false;

int main(){
	cout << "Welcome to the game of Tic Tac Toe."
			"\nBelow you will indicate your position (1-9) as shown in the table.\n" << endl;
	Marker();
	First();
	Draw();
	do{
		InputCheck();
		gameOver=CheckWinner();
		if(gameOver==true)
			break;
		ComputerTurn();
		Draw();
		gameOver=CheckWinner();
	}while(gameOver!=true);
	Draw();
	if(winner==user)
		cout << "Player 1 wins the game!" << endl;
	if(winner==comp)
		cout << "Computer wins the game!" << endl;
	if(winner=='t')
	return (0);
}
