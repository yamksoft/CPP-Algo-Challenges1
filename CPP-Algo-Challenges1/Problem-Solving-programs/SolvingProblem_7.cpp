/* What is required of you today Creating a program that solves problem #7
The user is asked to enter a number, then the entered number is displayed along with half of the entered value.
*/
#include <iostream>
using namespace std;

int SolvingProblem_7()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem # 7 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;
	int Num;
	int NumHalf;

	cout << "Enter value Num" << endl;
	cin >> Num;
	NumHalf = Num / 2;

	cout << "______________" << endl;

	cout << "Half of " << Num << " is " << NumHalf << endl;

	cout << "______________" << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}