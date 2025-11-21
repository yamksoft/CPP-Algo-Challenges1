/* What is required of you today Creating a program that solves problem #19:
* calculate a circle's area through its diameter, then print it on the screen.
1- ask the user to enter Measuring the diameter of the circle
2- print Area of ​​a circle:
Example Inputs: Diameter = 10, Area = 78.54.
*/

#include <iostream>
#include <iomanip> 

using namespace std;

int SolvingProblem_19()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #19 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;

    const float PI = 3.14159f;
    float Diameter, Area;

    cout << "Please enter the diameter measurement of the circle = ";
    cin >> Diameter;


    Area = PI * (Diameter * Diameter) / 4;

    // تحسين عرض النتيجة بدقة منزلتين عشريتين
    cout << fixed << setprecision(2);
    cout << "Area of ​​a circle = " << Area << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;

    return 0;
}