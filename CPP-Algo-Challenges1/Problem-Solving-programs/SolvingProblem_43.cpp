/* What is required of you today Creating a program that solves problem #43:
* that inputs the number of seconds_and changes it to days, hours, minutes,seconds.
1- Given the time duration of a task in the number of Total seconds.
2- print it on screen of number days, hours, minutes, seconds.
*/


#include <iostream>
using namespace std;

int SolvingProblem_43()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #43 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl;

	const int Minute = 60, Hour = 60 * Minute, Day = 24 * Hour;

	int TotalSeconds, NumDays, NumHours, NumMinutes, NumSeconds, Remainder;

	cout << "Please enter the total number of seconds it took to complete the task :" << endl;

	cout << "How many Total Seconds ?";
	cin >> TotalSeconds;

	
	NumDays = TotalSeconds / Day;
	Remainder = TotalSeconds % Day;

	NumHours = Remainder / Hour;
	Remainder = TotalSeconds % Hour;

	NumMinutes = Remainder / Minute;
	Remainder = TotalSeconds % Minute;

	NumSeconds = Remainder;
	
	cout << "_____________________________________________" << endl << endl;
	cout << "I have taken on your task: " << NumDays << ":" << NumHours << ":" << NumMinutes << ":" << NumSeconds << endl;
	cout << "_____________________________________________" << endl << endl;

	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}