/********************************************************************/
/*** Title: eclipseDebugArrayDemo.cpp                             ***/
/*** Course: Computational Problem Solving CPET-121               ***/
/*** Developer: JTSchueckler                                      ***/
/*** Data: 19Mar18                                                ***/
/*** Description: A nested loop program to demonstrate some       ***/
/***              of the eclipse debugger features.               ***/
/********************************************************************/
#include <iostream>

using namespace std;

float CalculateValue (int, float[], float&);

int main(void)
{
	int numberOfMeasurements = 4;
	float temperatures[4] = {98.6, 101.1, 100.8, 98.7};
	float timeInterval = 2.5, avg, totalTime, total = 0;

	for (int i = 0; i < 4; ++i)
	{
		total = total + temperatures[i];
	}
	avg = total / numberOfMeasurements;
	totalTime = timeInterval * numberOfMeasurements;

	cout << "The main average Temperature = " << avg << endl;
	cout << "The main totalTime = " << totalTime << endl;

	avg = CalculateValue (numberOfMeasurements, temperatures, timeInterval );

	cout << "The function average Temperature = " << avg << endl;
	cout << "The function totalTime = " << timeInterval << endl;

	return (0);
}

float CalculateValue (int loop, float dataIn[], float& interval)
{
	float average, sum = 0;
	for (int i = 0; i <= loop; ++i)
	{
		sum = sum + dataIn[i];
	}
	average = sum / loop;
	interval *= 4;

	return (average);
}




