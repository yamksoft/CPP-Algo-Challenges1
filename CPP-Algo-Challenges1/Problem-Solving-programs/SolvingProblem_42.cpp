/* What is required of you today Creating a program that solves problem #42:
* calculate the task duration in seconds.
1- Given the time duration of a task in the number of days, hours, minutes, and seconds.
2- print it on screen Total seconds.
*/


#include <iostream>
using namespace std;

int SolvingProblem_42()
{
	cout << "==========================================" << endl;
	cout << "      Welcome to the program to solve problem #42 " << endl;
	cout << "==========================================" << endl;
	cout << "***************************************************************START*******************************************************" << "\a" << endl << endl ;
	
	const int Minute = 60 ,Hour = 60 * Minute, Day = 24 * Hour;
	 
	int TotalSeconds,days, hours, minutes, seconds;

	cout << "Please give me the numbers of days, hours, minutes, seconds To get the total seconds for the task you completed :" << endl;

	cout << "How many days ?";
	cin >> days;

	cout << "How many hours ?";
	cin >> hours;

	cout << "How many minutes ?";
	cin >> minutes;

	cout << "How many seconds ?";
	cin >> seconds;

	TotalSeconds = ((Day * days)+(Hour * hours)+(Minute * minutes)+seconds);

	cout << "That the task I performed took the following period: " << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

	cout << "The total number of seconds for the task = " << TotalSeconds << endl;


	cout << "***************************************************************THE END\a*****************************************************" << endl;


	return 0;



}