/*
 * temp.cpp
 *
 *  Created on: Mar 20, 2018
 *      Author: Batman
 */

#include <iostream>
using namespace std;

int main()
{
	int i, j, val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 4; ++j)
			cout << "  " << val[i][j];

	return 0;
}
