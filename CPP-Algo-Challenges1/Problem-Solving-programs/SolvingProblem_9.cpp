/* What is required of you today Creating a program that solves problem #9
It calculates the sum of three numbers entered by the user, then displays the inputs and the total sum.
*/
#include <iostream>
using namespace std;
int SolvingProblem_9()
{
	cout << "==========================================" << endl;
	cout << "       Welcome to the program to solve problem #9 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

	int Num1, Num2, Num3, sum;

	cout << "Enter the value of each of the three consecutive numbers to get the correct sum." << endl;

	cout << "Enter a first number ";
	cin >> Num1;

	cout << "Enter a Second number ";
	cin >> Num2;

	cout << "Enter a Third number ";
	cin >> Num3;

	sum = Num1 + Num2 + Num3;

	cout << "____________________________________" << endl;

	cout << "Value of your input: " << Num1 << " , " << Num2 << " , " << Num3 << endl;

	cout << "____________________________________" << endl;

	cout << " The total sum = " << sum << endl;









	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;


}