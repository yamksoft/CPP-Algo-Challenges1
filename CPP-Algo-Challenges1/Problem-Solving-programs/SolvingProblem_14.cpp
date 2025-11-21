/* What is required of you today Creating a program that solves problem #14:
1- ask the user to enter: Number1 , Number2
2- print the two numbers
3- swap the two numbers and print After changing the values
Example Inputs:10,20 Outputs→10,20 Outputs swap→20,10.
*/
#include <iostream>
using namespace std;

int SolvingProblem_14()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #14 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;
	
	//1- ask the user to enter: Number1 , Number2
	int FirstNum, SecodNum, TempCont;

	cout << "Please enter the values ​​of the two numbers you want to print, before and after the switch :" << endl;

	cout << "Enter a first number :";
	cin >> FirstNum;

	cout << "Enter a Second number :";
	cin >> SecodNum;


	//2- print the two numbers
	cout << "Value of your input:\n" << FirstNum << "\n" << SecodNum << "\n\n";


	//3- swap the two numbers
	TempCont = SecodNum;
	SecodNum = FirstNum;
	FirstNum = TempCont;

	cout << "After changing the values:\n" << FirstNum << " \n" << SecodNum << "\n\n";


	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}