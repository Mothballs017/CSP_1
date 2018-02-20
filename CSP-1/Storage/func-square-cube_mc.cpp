/*
 * func-square-cube_mc.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: mxc6641
 */
#include <cmath>
#include "func-square-cube_mc.h"

using namespace std;

float Sqr_Cube(float num, float& cube){
	float square;
	square = pow(num,2);
	cube = pow(num,3);
	return square;
}

