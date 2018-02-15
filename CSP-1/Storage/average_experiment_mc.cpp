/*********************************************************************************/
/*** Title: average_experiment_mc.cpp 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 13, 2018														   ***/
/*** Description: Averange Test Results per Experiment						   ***/
/*********************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(void){
	float data[4][6]={{23.2, 31, 16.9, 27, 25.4, 28.6},
			{34.8, 45.2, 27.9, 36.8, 33.4, 39.4},
			{19.4, 16.8, 10.2, 20.8, 18.9, 13.4},
			{36.9, 39, 49.2, 45.1, 42.7, 50.6}};
	for(int i = 0; i < 4; i++){
		float sum = 0.0;
		for(int k = 0; k < 6; k++){
			sum = sum + data[i][k];
		}
		float avg = sum/6;
		cout << "Experiment " << i+1 << " : " << avg << endl;
	} return(0);
}
/*********************************************************************************/
