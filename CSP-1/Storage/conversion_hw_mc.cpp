/*********************************************************************************/
/*** Title: conversion_hw_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: April 10, 2018                                                      ***/
/*** Description: Converting Polar to XY Using Files                           ***/
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
	float distance, angle, dist[7], ang[7], x, y;
	ifstream inFile;
	inFile.open("polar.dat");
	if(inFile.fail())
		exit(1);
	for(int i=0;i<6;i++){
		inFile >> dist[i] >> ang[i];
		cout << setprecision(2) << dist[i] << " " << ang[i] << endl;
	}
	ofstream outFile;
	outFile.open("polar.dat");
	if(outFile.fail())
		exit(1);
	for(int i=0;i<6;i++){
		outFile << fixed << setprecision(1) << dist[i] << " " << ang[i] << endl;
	}
	cout << "distance, angle: ";
	cin >> distance >> angle;
	outFile << fixed << setprecision(1) << distance << " " << angle << endl;
	inFile.close();
	outFile.close();
	inFile.open("polar.dat");
	if(inFile.fail())
		exit(1);;
	for(int i=0;i<7;i++){
		inFile >> dist[i] >> ang[i];
	}
	outFile.open("xycord.dat");
	if(outFile.fail())
		exit(1);
	inFile.close();
	for(int i=0;i<7;i++){
		x=dist[i]*cos(M_PI/180.0);
		y=dist[i]*sin(M_PI/180.0);
		outFile << fixed << setprecision(1) << x << " " << y << endl;
	}
	outFile.close();
	return 0;
}
