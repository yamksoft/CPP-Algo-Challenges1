/* What is required of you today Creating a program that solves problem #21:
calculate a circle's area along its circumference, then print it on the screen
1- ask the user to enter the side length of the square
2- print Area of ​​a circle
Example Inputs: circumference = 20, CircleArea = 31.831.
*/

#include <iostream>
using namespace std;
#include <iomanip>  // لإضافة التحكم بدقة الأرقام

int SolvingProblem_21()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #21 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

    const float PI = 3.14159f;
    float Circumference, CircleArea;

    cout << "Please enter the Circumference measurement of the circle. = ";
    cin >> Circumference;


    CircleArea = (Circumference * Circumference) / (4 * PI);

    // تحسين عرض النتيجة بدقة منزلتين عشريتين

    cout << fixed << setprecision(2);
    cout << "Area of ​​a circle = " << CircleArea << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;

    return 0;
}