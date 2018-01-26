/*********************************************************************************/
/*** Title: internet_service_provider_mc.cpp								   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 25, 2018                                                        ***/
/*** Description: Calculating Monthly Bill		                               ***/
/*********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char pkg;
	int hrs;
	float total=0.0;
	float A=9.95;
	float a=2.00;
	float B=14.95;
	float b=1.00;
	float C=19.95;
	cout << "Which package did you purchase? \n(A) Package A \n(B) Package B \n(C) Package C \n";
	cin >> pkg;
	cout << "How many hours did you use? ";
	cin >> hrs;
	switch(pkg){
	case 'A':
	case 'a':
		total+=A;
		if(hrs > 10)hrs-=10;
		cout << "Your total is $" << total+(hrs*a) << endl;
		break;
	case 'B':
	case 'b':
		total+=B;
		if(hrs > 20)hrs-=20;
		cout << "Your total is $" << total+(hrs*b)<< endl;
		break;
	case 'C':
	case 'c':
		total+=C;
		cout << "Your total is $" << total << endl;
		break;
	default : cout << "Illegal Operation \n" << endl;
	}
	return 0;
}

/*********************************************************************************/



