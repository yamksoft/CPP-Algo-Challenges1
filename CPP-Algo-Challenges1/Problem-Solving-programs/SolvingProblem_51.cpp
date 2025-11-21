/* What is required of you today Creating a program that solves problem #51
A simple calculator that performs basic arithmetic operations.
*/
#include <iostream>
using namespace std;

int SolvingProblem_51()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem # 51 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;
	
	double num1, num2, result;
	char operation;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter an operator (+, -, *, /): ";
	cin >> operation;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	switch(operation) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0) {
				result = num1 / num2;
			} else {
				cout << "Error: Division by zero!" << endl;
				return 1;
			}
			break;
		default:
			cout << "Error: Invalid operator!" << endl;
			return 1;
	}
	
	cout << "______________" << endl;
	cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
	cout << "______________" << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;

	return 0;
}