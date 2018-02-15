/*********************************************************************************/
/*** Title: continuous_grade_mc.cpp 										   ***/
/*** Course: Computational Problem Solving CPET-121 						   ***/
/*** Developer: Matthew Chu 												   ***/
/*** Data: Feb 15, 2018														   ***/
/*** Description: Eternal Grade With Break or Continue						   ***/
/*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
	bool end;
	float grade=0;
	float sumgrade=0;
	float numgrades=0;
	while(end==false){
		cout << "Enter a grade between 0-100: ";
		cin >> grade;
		if(grade==999)
			break;
		if(grade<0||grade>100){
			cout << "INVALID GRADE" << endl;
			continue;
		}
		else{
			sumgrade+=grade;
			numgrades++;
		}

	}
	cout << fixed << setprecision(2) << sumgrade/numgrades << endl;
	return(0);
}
