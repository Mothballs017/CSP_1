/*********************************************************************************/
/*** Title: lumber_board_feet_loop_mc.cpp									   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 15, 2018														   ***/
/*** Description: Function Call to Determine Board Feet						   ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Board_Feet(float,float,float);

int main(void){
	int ctr=0;
	for(int i=0;i<4;i++){
		float length=12.0; //in
		length+=(6.0*i);
		for(int k=0;k<3;k++){
			float width=4.0; //in
			width+=(2.0*k);
			for(int m=0;m<5;m++){
				float depth=1.0; //in
				ctr++;
				depth+=(0.5*m);
				float feet=Board_Feet(length,width,depth);
				cout << fixed << setprecision(2) << "#" << setw(3) << ctr << ":  " << setw(5) <<
						length << " | " << setw(5) << width << " | " << setw(5) << depth << " = "
						<< setw(5) << feet << endl;
			}
		}
	}
	return(0);
}

float Board_Feet(float l, float w, float d){
	float volume=(l*w*d)/144;
	return(volume);
}
