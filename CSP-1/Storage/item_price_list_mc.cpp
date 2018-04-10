/*********************************************************************************/
/*** Title: item_price_list_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 10, 2018                                                      ***/
/*** Description: Reading/Writing Item Prices	                               ***/
/*********************************************************************************/

#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
	float prices[10];
	string items[4]={"Apples","Bananas", "Grapes", "Oranges"};

	ifstream inFile;
	inFile.open("prices.dat");
	if(inFile.fail())
		exit(1);
	int i=0;
	while(inFile.eof()!=true){
		inFile>>prices[i];
		i++;
	}
	inFile.close();
	ofstream outFile;
	outFile.open("item_prices.dat");
	if(outFile.fail())
		exit(1);
	for(int i=0;i<4;i++){
		cout << fixed << setprecision(2) << items[i] << " " << prices[i] << endl;
		outFile << fixed << setprecision(2) << items[i] << " " << prices[i] << endl;
	}
	outFile.close();
	return 0;
}
