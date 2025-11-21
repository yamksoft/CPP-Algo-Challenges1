/* What is required of you today Creating a program that solves problem #22:
calculate the area of ​​a circle inscribed in an Isosceles Triangle, then print it on the screen.
1- ask the user to enter the side length of the square
2- print Area of ​​a circle
Example Inputs: sides of a triangle = 20 Triangle Base=10  CircleArea = 47.124.
*/
#include <iostream>
using namespace std;
#include <iomanip> 
int SolvingProblem_22()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #22 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

	float SideTriangle, TriangleBase, CircleArea;

	const float PI = 3.14159f;

	cout << "Please enter the measurement of the side of the equilateral triangle = ";
	cin >> SideTriangle;

	cout << "Please enter the base measurement of the triangle = ";
	cin >> TriangleBase;

	CircleArea = PI*(TriangleBase * TriangleBase/4) * ((2 * SideTriangle - TriangleBase) / (2 * SideTriangle + TriangleBase));

	cout << fixed << setprecision(3);
	cout << "Area of ​​a circle = " << CircleArea  << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}