/*********************************************************************************/
/*** Title: lumber_board_feet_mc.cpp 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 15, 2018														   ***/
/*** Description: Function Call to Determine Board Feet						   ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Board_Feet(float l, float w, float h){
	float volume=(l*w*h)/144;
	return(volume);
}

int main(void){
	float length,width,height,feet; //in
	cout << "Enter board length: ";
	cin >> length;
	cout << "Enter board width: ";
	cin >> width;
	cout << "Enter board height: ";
	cin >> height;
	feet=Board_Feet(length,width,height);
	cout << fixed << setprecision(2) << "Volume of board is: " << feet << " ft" << endl;
	return(0);
}
