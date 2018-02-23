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
bool gameOver=false;

void Draw(){
	cout << "\n\n" << right << setw(16) << "Tic Tac Toe\n" << endl;
	cout << left << "User (X)  -  Computer (O)\n\n" << endl;
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

bool Available(int spot, char player){
	bool unavailable=false;
	if(spot==1){
		if(pos1==user || pos1==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos1=player;
			return !unavailable;
		}
	}
	if(spot==2){
		if(pos2==user || pos2==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos2=player;
			return !unavailable;
		}
	}
	if(spot==3){
		if(pos3==user || pos3==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos3=player;
			return !unavailable;
		}
	}
	if(spot==4){
		if(pos4==user || pos4==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos4=player;
			return !unavailable;
		}
	}
	if(spot==5){
		if(pos5==user || pos5==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos5=player;
			return !unavailable;
		}
	}
	if(spot==6){
		if(pos6==user || pos6==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos6=player;
			return !unavailable;
		}
	}
	if(spot==7){
		if(pos7==user || pos7==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos7=player;
			return !unavailable;
		}
	}
	if(spot==8){
		if(pos8==user || pos8==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos8=player;
			return !unavailable;
		}
	}
	if(spot==9){
		if(pos9==user || pos9==comp){
			if(player==user)
				cout << "Invalid input: position already occupied." << endl;
			return unavailable;
		}
		else{
			pos9=player;
			return !unavailable;
		}
	}
	else return unavailable;
}

void InputCheck(){
	bool notValid=false;
	bool move;
	while(notValid!=true){
		cout << "Enter your position: ";
		cin >> position;
		if(position==999){
			gameOver=true;
			break;
		}
		if(position<=0||position>=10){
			cout << "Invalid input: the position indicator has to be in the range of 1 to 9" << endl;
		}
		else{
			move=Available(position, user);
			if(move==false)
				continue;
			else
				notValid=true;
		}
	}
}

void ComputerTurn(){
	bool notValid=false;
	bool move;
	srand(time(NULL));
	while(notValid!=true){
		int num=(rand()%10);
		move=Available(num, comp);
		if(move==false)
			continue;
		notValid=true;
	}
}

bool CheckWinner(){
	if(pos1==pos2 && pos2==pos3 && pos3==pos1){
		if(pos1=='X'){
			cout << "Player 1 Wins the Game!" << endl;
		}
		else{
			cout << "Computer wins the Game!" << endl;
		}
		return true;
	}
	if(pos4==pos5 && pos5==pos6 && pos6==pos4){
		if(pos4=='X'){
			cout << "Player 1 Wins the Game!" << endl;
		}
		else{
			cout << "Computer wins the Game!" << endl;
		}
		return true;
	}
	if(pos7==pos8 && pos8==pos9 && pos9==pos7){
		if(pos7=='X'){
			cout << "Player 1 Wins the Game!" << endl;
		}
		else{
			cout << "Computer wins the Game!" << endl;
		}
		return true;
	}
	if(pos1==pos5 && pos5==pos9 && pos9==pos1){
		if(pos5=='X'){
			cout << "Player 1 Wins the Game!" << endl;
		}
		else{
			cout << "Computer wins the Game!" << endl;
		}
		return true;
	}
	if(pos7==pos5 && pos5==pos3 && pos3==pos7){
		if(pos7=='X'){
			cout << "Player 1 Wins the Game!" << endl;
		}
		else{
			cout << "Computer wins the Game!" << endl;
		}
		return true;
	}
	if(pos1!='1' && pos2!='2' && pos3!='3' && pos4!='4' && pos5!='5'
			&& pos6!='6' && pos7!='7' && pos8!='8' && pos9!='9'){
		cout << "Tie" << endl;
		return true;
	}
	else return false;
}

//extra credit
void Marker(){
	bool validChoice=false;
	while(validChoice!=true){
		char choice;
		cout << "But first, would you like to be X? or O?\n";
		cin >> choice;
		if(choice==user){
			validChoice=true;
		}
		if(choice==comp){
			char tmp=comp;
			comp=user;
			user=tmp;
			validChoice=true;
		}
	}
}

//extra credit
void First(){
	srand(time(NULL));
	int num=(rand()%2);
	int coin;
	char choice;
	bool validChoice=false;
	while(validChoice!=true){
		cout << "Who will go first? Enter 'h' or 't' to determine who will go first.\n";
		cin >> choice;
		if(choice=='h')
			coin=0;
		if(choice=='t')
			coin=1;
		if(coin==num){
			cout << "You win! You will go first." << endl;
			validChoice=true;
		}
		if(coin!=num){
			cout << "You lose! You will not go first." << endl;
			ComputerTurn();
			validChoice=true;
		}
	}
}

int main(){
	cout << "Welcome to the game of Tic Tac Toe."
			"\nBelow you will indicate your position (1-9) as shown in the table.\n" << endl;
	Marker();
	First();
	while(gameOver!=true){
		Draw();
		InputCheck();
		if(gameOver==true)
			break;
		gameOver=CheckWinner();
		if(gameOver==true)
			break;
		ComputerTurn();
		gameOver=CheckWinner();
	}
	return (0);
}
