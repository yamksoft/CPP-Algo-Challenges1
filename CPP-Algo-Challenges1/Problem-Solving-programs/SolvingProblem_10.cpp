/* What is required of you today Creating a program that solves problem #10
a program to ask the user to enter : Mark1, Mark2, Mark3 
Then print the average of entered marks Example Inputs : 90, 80, 70 ->80
*/

#include <iostream>
using namespace std;

int SolvingProblem_10()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #10 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

    float Mark1, Mark2, Mark3, Average;

    cout << "Please enter the values of the three marks to get the total and correct average :" << endl;

    cout << "Enter a first mark ";
    cin >> Mark1;

    cout << "Enter second mark ";
    cin >> Mark2;

    cout << "Enter third mark";
    cin >> Mark3;

    Average = (Mark1 + Mark2 + Mark3) / 3.0f;

    cout << "Your average " << Average << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;


    return 0;
}