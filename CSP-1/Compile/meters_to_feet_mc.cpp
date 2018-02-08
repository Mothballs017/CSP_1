/*********************************************************************************/
/*** Title: meters_to_feet_mc.cpp									 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Feb 8, 2018                                                         ***/
/*** Description: Converting Meters to Feet					  		           ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
//Part a,b
//	float meter,number,increment,feet;
//	cout << "Enter starting meter value: ";
//	cin >> meter;
//	cout << "Enter number of numbers to be made: ";
//	cin >> number;
//	cout << "Enter the increment between metric values: ";
//	cin >> increment;
//	float setmeter=meter;
//	while(meter<=setmeter+(number*increment)){
//		feet=meter*3.281;
//		cout << meter << " meters = " << feet << " feet" << endl;
//		meter+=increment;
//	}
//Part c
	float startmeter,endmeter,increment,feet;
	cout << "Enter starting meter value: ";
	cin >> startmeter;
	cout << "Enter ending meter value: ";
	cin >> endmeter;
	cout << "Enter the increment between metric values: ";
	cin >> increment;
	float setmeter=startmeter;
	if((endmeter-startmeter)/increment>20)
		increment=(endmeter-startmeter)/19;
	while(startmeter<=endmeter){
		feet=startmeter*3.281;
		cout << startmeter << " meters = " << feet << " feet" << endl;
		startmeter+=increment;
	}

	return (0);
}

