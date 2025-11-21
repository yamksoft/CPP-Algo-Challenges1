/* What is required of you today Creating a program that solves problem #15:\
* Calculate the area of ​​a rectangle and print it on the screen.
1- ask the user to enter value: Width , Length
2- print the two numbers:
Example Inputs: Width= 10, Length= 20 Area= 200.
*/
#include <iostream>
using namespace std;

int SolvingProblem_15()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #15 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

	float Width, Length, Area;

	cout << "Please measure the width and length of the rectangle, then enter the measurements to get the area of ​​the rectangle :" << endl;

	cout << "What is the width measurement?" << endl;
	cin >> Width;

	cout << "What is the Length measurement?" << endl;
	cin >> Length;

	Area = Width * Length;

	cout << "The area of ​​the rectangle, based on the measurements entered above = " << Area <<endl;


	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}