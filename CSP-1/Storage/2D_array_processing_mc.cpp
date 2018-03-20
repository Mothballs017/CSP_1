/*********************************************************************************/
/*** Title: 2D_array_processing_mc.cpp								 		   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: March 20, 2018                                                      ***/
/*** Description: Finding Max Value in 2D Array					               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

int main(){
	const int ROW=4, COL=5;
	float arr[ROW][COL] = { {16,22,99,4,18},
							{-258,4,108,5,98},
							{105,6,15,2,45},
							{33,88,72,16,3}};
	float max=arr[0][0];
	int rowmax=0,colmax=0;
	for(int i=0; i<ROW; i++){
		for(int k=0; k<COL; k++){
			if(arr[i][k] > max){
				max=arr[i][k];
				rowmax=i;
				colmax=k;
			}
		}
	}
	cout << "Max Value = " << max << " @ location r: " << rowmax << " c: " << colmax << endl;
	return (0);
}
