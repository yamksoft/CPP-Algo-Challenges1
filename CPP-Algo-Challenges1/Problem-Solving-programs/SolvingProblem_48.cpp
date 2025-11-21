/* What is required of you today Creating a program that solves problem #48:
1- read a LoanAmount.
2- ask you how many months you need to settle the loan.
3- calculate the monthly installment amount  then print it on screen.
*/

#include <iostream>
using namespace std;

int SolvingProblem_48()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #48 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

    int LoanAmount, MonthlyInstallment, ManyMonths;

    cout << "Please enter the loan amount ?";
    cin >> LoanAmount;

    cout << "How many months you need to settle the loan ?";
    cin >> ManyMonths;

    MonthlyInstallment = LoanAmount / ManyMonths;

    cout << "_____________________________________________" << endl;
    cout << "The amount due for monthly installment payment is = " << MonthlyInstallment << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;

    return 0;
}