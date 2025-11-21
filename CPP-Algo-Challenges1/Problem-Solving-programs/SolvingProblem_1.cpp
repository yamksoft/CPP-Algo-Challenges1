/* What is required of you today Creating a program that solves problem #1
The user is asked to enter a number, then the entered number is displayed along with half of the entered value.
*/
#include <iostream>
using namespace std;

int SolvingProblem_1()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem # 1 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

	int NumA = 10, NumB = 20;

	cout << "Enter value NumA" << endl;
	cin >> NumA;

	cout << "Enter value NumB" << endl;
	cin >> NumB;

	cout << "____________________________" << endl<< endl;
	cout << "NumA + NumB =" << NumA + NumB << endl;
	cout << "NumA - NumB =" << NumA - NumB << endl;
	cout << "NumA * NumB =" << NumA * NumB << endl;
	cout << "NumA % NumB =" << NumA % NumB << endl;
	cout << "____________________________" << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}