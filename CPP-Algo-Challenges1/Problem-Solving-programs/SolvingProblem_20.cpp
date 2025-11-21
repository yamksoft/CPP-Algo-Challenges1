/* What is required of you today Creating a program that solves problem #20:
Calculate Circle area inscribed in a square, then print it on the screen.
1- ask the user to enter the side length of the square
2- print Area of ​​a circle
Example Inputs: Side Length = 10, CircleArea = 78.54.
*/

#include <iostream>
using namespace std;
#include <iomanip>  // لإضافة التحكم بدقة الأرقام

int SolvingProblem_20()
{
    cout << "==========================================" << endl;
    cout << "      Welcome to the program to solve problem #20 " << endl;
    cout << "==========================================" << endl;
    cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

    const float PI = 3.14159f;
    float SideLength, CircleArea;

    cout << "Please enter the side length of the square = ";
    cin >> SideLength;


    CircleArea = PI * (SideLength * SideLength) / 4;

    // تحسين عرض النتيجة بدقة منزلتين عشريتين
    cout << fixed << setprecision(2);
    cout << "Area of ​​a circle = " << CircleArea << endl;

    cout << "***************************************************************THE END*****************************************************" << endl;

    return 0;
}