/*********************************************************************************/
/*** Title: class_average_mc.cpp											   ***/
/*** Course: Computational Problem Solving CPET-121							   ***/
/*** Developer: Matthew Chu													   ***/
/*** Data: Jan 18, 2018                                                        ***/
/*** Description: Class average activity		                               ***/
/*********************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
	float average;
	float midterm_exam;
	float final_exam;
	float problem1, problem2, problem3;
	float problem_average;
	float project1, project2;
	float project_average;

	midterm_exam = 82.0; // <- In future programs the user will enter this
	final_exam = 93.0;	 // <- SAME

	problem1 = 92.0;	 // <- SAME
	problem2 = 74.0;	 // <- SAME
	problem3 = 86.0;	 // <- SAME
	problem_average = (problem1 + problem2 + problem3) / 3;

	project1 = 82.0;	 // <- SAME
	project2 = 65.0;	 // <- SAME
	project_average = (project1 + project2) / 2;

	// the equation for average was split onto two lines for readability
	average = (midterm_exam * 0.15) + (final_exam * 0.15) + (problem_average * 0.30) + (project_average * 0.40);

	cout << "Your class average is: " << average << endl;

	return (0);
}
/*********************************************************************************/
