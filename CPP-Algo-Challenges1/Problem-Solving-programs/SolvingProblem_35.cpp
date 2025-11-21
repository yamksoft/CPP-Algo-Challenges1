/* What is required of you today Creating a program that solves problem #35:
1- enter the number for each category to get the total:Pennies, Nickels, Dimes, Quarters, Dollars
2- print the Pennies , Dollars
*/
#include <iostream>
using namespace std;

int SolvingProblem_35()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #35 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

	const int Penny = 1, Nickel = 5, Dime = 10, Quarter = 25, Dollar = 100;
	int Pennies, Nickels, Dimes, Quarters, Dollars;
	float TotalDollars;
	int TotalPennies;

	cout << "Please enter the number for each category to get the total: Pennies, Nickels, Dimes, Quarters, Dollars?" << endl;

	cout << "How many Pennies?";
	cin >> Pennies;

	cout << "How many Nickels?";
	cin >> Nickels;

	cout << "How many Dimes?";
	cin >> Dimes;

	cout << "How many Quarters?";
	cin >> Quarters;

	cout << "How many Dollars?";
	cin >> Dollars;


	TotalPennies = Pennies * Penny + Nickels * Nickel + Dimes * Dime + Quarters * Quarter + Dollars * Dollar;

	TotalDollars = static_cast<float>(TotalPennies) / Dollar;

	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << TotalDollars << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;
}