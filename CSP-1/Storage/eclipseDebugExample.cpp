/********************************************************************/
/*** Title: eclipseDebugExample.cpp                               ***/
/*** Course: Computational Problem Solving CPET-121               ***/
/*** Developer: JTSchueckler                                      ***/
/*** Data: 19Mar18                                                ***/
/*** Description: Some bad code.                                  ***/
/********************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	const int NUMELSX=2,NUMELSY=4;
	int square[NUMELSX][NUMELSY]={1,2,3,4,5,6,7,8},t,s;
	cout<<"\n"<<"The computer will create a 2 X 4 initialized"<<endl;
	cout<<"array of the variable square[t][s]."<<"\n"<<endl;
	cout<<"The array created is:"<<"\n"<<endl;
	for (t=0;t<NUMELSX;++t){
		for (s=0;s<NUMELSY;++s)
			cout<<setw(4)<<square[t][s];
		cout<<"\n"<<endl;
	}
	return(0);
}
