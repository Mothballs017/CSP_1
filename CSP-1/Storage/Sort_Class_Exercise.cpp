/***************************************************************/
/*** Title: Sort_Class_Exercise.cpp                          ***/
/*** Course: Computational Problem Solving CPET-121          ***/
/*** Developer: Dr G.H. Zion                                 ***/
/*** Data: Spring 2018                                       ***/
/*** Description: Class Exercise for Sorting                 ***/
/***************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <ctime>


using namespace std;

int const SIZE = 10;

void Create_Data(int d[])
{
	for (int i = 0; i < SIZE; i++)
		d[i] = rand() % 100;
	return;
}

void Print_Data(int d[])
{
	cout << endl << setfill('0');
	for (int i = 0; i < SIZE; i++)
		cout << "[" << setw(2) << i << "] ";
	
	cout << endl << setfill(' ');
	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << d[i] << "  ";
	cout << endl;
	return;
}

int main(void)
{
	int data[SIZE];
	
	srand(time(NULL));

	Create_Data(data);
	Print_Data(data);
//	int tmp;
//	for(int out=0; out<SIZE-1;out++){
//		for(int in=out+1; in<SIZE; in++){
//			if(data[in]<data[out]){
//				tmp=data[out];
//				data[out]=data[in];
//				data[in]=tmp;
//			}
//		}
//	}
	int tmp;
	for(int out=0; out<SIZE-1;out++){
		for(int in=0; in<SIZE-1-out; in++){
			if(data[in]<data[in+1]){
				tmp=data[in];
				data[in]=data[in+1];
				data[in+1]=tmp;
			}
		}
	}
	/*
	INSERT YOUR SORTING CODE HERE
	*/
	Print_Data(data);

	return (0);
}
/***************************************************************/
