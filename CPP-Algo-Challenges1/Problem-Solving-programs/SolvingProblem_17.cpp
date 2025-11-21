/* What is required of you today Creating a program that solves problem #17:
* Calculate the area of ​​a triangle and print it on the screen.
1- ask the user to enter value: Base , Length
2- print the two numbers:
Example Inputs: Base= 10, Length= 8 Area= 40.
*/
#include <iostream>
using namespace std;

int SolvingProblem_17()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #17 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

	float Base, Length, Area;

	cout << "Please measure the width and length of the rectangle, then enter the measurements to get the area of ​​the rectangle :" << endl;

	cout << "What is the Base measurement?" << endl;
	cin >> Base;

	cout << "What is the Length measurement?" << endl;
	cin >> Length;

	Area = (Base /2) * Length;

	cout << "The area of ​​the triangle, based on the measurements entered above = " << Area << endl;


	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}