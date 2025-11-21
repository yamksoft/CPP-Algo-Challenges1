/* What is required of you today Creating a program that solves problem #40:
* A restaurant charges a 10% service fee and a 16% sales tax.
1- read a BillValue, add the service fee and sales tax.
2- print the Total Bill on the screen.
*/
#include <iostream>
using namespace std;

int SolvingProblem_40()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #40 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;


	float TotalBill, CashPaid, Remainder;

	cout << "Please enter the customer's total invoice amount?";
	cin >> TotalBill;

	TotalBill = (TotalBill * 1.1 * 1.16);

	cout << "The Total Bill = " << TotalBill << endl;

	cout << "Now tell me how much money the customer gave you?";
	cin >> CashPaid;

	Remainder = TotalBill - CashPaid;


	cout << "The customer paid = " << CashPaid;

	cout << "If there is a" << " - " "before the remaining amount, it means that the remaining amount is equal to the remaining balance= " << Remainder << endl;



    cout << "***************************************************************THE END*****************************************************" << endl;


    return 0;
}