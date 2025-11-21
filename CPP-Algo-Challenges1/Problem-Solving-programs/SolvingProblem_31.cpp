/* What is required of you today Creating a program that solves problem #31:
1- ask the user to enter a Nunber Power of 2,3,4
2- print the Number^2, Number^3, Number^4
*/
#include <iostream>
using namespace std;

int SolvingProblem_31()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #31 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

    int Nunber, NumPower2, NumPower3, NumPower4;

    cout << "Please enter any number up to Power of 2, 3, 4 ";
    cin >> Nunber;

    NumPower2 = (Nunber * Nunber);
    NumPower3 = (Nunber * Nunber * Nunber);
    NumPower4 = (Nunber * Nunber * Nunber * Nunber);

    cout << "Number^2 = " << NumPower2 << endl;
    cout << "Number^3 = " << NumPower3 << endl;
    cout << "Number^4 = " << NumPower4 << endl;


    cout << "***************************************************************THE END*****************************************************" << endl;


    return 0;



}