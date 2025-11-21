/* What is required of you today Creating a program that solves problem #47:
1- read a LoanAmount and Monthly Payment.
2- calculate how many months you need to settle the loan.
3- print many months on screen.
*/
#include <iostream>
using namespace std;

int SolvingProblem_47()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #47 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;


    int LoanAmount, MonthlyPayment, ManyMonths;

    cout << "Please enter the loan amount ?";
    cin >> LoanAmount;

    cout << "What is the monthly installment amount ?";
    cin >> MonthlyPayment;

    ManyMonths = (LoanAmount / MonthlyPayment);

    cout << "_____________________________________________" << endl << endl;

    cout << "It commits to installments for a period of " << ManyMonths << " Months" << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;


    return 0;



}