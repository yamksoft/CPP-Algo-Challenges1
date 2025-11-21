/* What is required of you today Creating a program that solves problem #39:
1- read a Total Bill and CashPaid and calculate the remainder to be paid back
2- print calculate the remainder to be paid back
*/
#include <iostream>
using namespace std;

int SolvingProblem_39()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #39 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

	float TotalBill, CashPaid, Remainder;

	cout << "Please enter the customer's total invoice amount?";
	cin >> TotalBill;

	cout << "Now tell me how much money the customer gave you?";
	cin >> CashPaid;


	Remainder = TotalBill - CashPaid;

	cout << "If there is a" << " - " "before the remaining amount, it means that the remaining amount is equal to the remaining balance= " << Remainder << endl;


	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}