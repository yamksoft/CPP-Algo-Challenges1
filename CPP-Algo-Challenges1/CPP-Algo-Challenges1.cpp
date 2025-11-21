// CPP-Algo-Challenges1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function declarations for all problem solving programs
int SolvingProblem_1();
int SolvingProblem_7();
int SolvingProblem_9();
int SolvingProblem_10();
int SolvingProblem_14();
int SolvingProblem_15();
int SolvingProblem_17();
int SolvingProblem_19();
int SolvingProblem_20();
int SolvingProblem_21();
int SolvingProblem_22();
int SolvingProblem_31();
int SolvingProblem_35();
int SolvingProblem_39();
int SolvingProblem_40();
int SolvingProblem_42();
int SolvingProblem_43();
int SolvingProblem_47();
int SolvingProblem_48();
int SolvingProblem_51();

int main()
{
    int choice;

    do {
        cout << "==========================================" << endl;
        cout << "    Welcome to Algorithm Problem Solving System" << endl;
        cout << "==========================================" << endl;
        cout << "Select the problem you want to solve:" << endl;
        cout << "1.  Program Solve Problem 1" << endl;
        cout << "7.  Program Solve Problem 7" << endl;
        cout << "9.  Program Solve Problem 9" << endl;
        cout << "10. Program Solve Problem 10" << endl;
        cout << "14. Program Solve Problem 14" << endl;
        cout << "15. Program Solve Problem 15" << endl;
        cout << "17. Program Solve Problem 17" << endl;
        cout << "19. Program Solve Problem 19" << endl;
        cout << "20. Program Solve Problem 20" << endl;
        cout << "21. Program Solve Problem 21" << endl;
        cout << "22. Program Solve Problem 22" << endl;
        cout << "31. Program Solve Problem 31" << endl;
        cout << "35. Program Solve Problem 35" << endl;
        cout << "39. Program Solve Problem 39" << endl;
        cout << "40. Program Solve Problem 40" << endl;
        cout << "42. Program Solve Problem 42" << endl;
        cout << "43. Program Solve Problem 43" << endl;
        cout << "47. Program Solve Problem 47" << endl;
        cout << "48. Program Solve Problem 48" << endl;
        cout << "51. Program Solve Problem 51" << endl;

        cout << "0. Exit" << endl;
        cout << "==========================================" << endl;
        cout << "Enter problem number: ";

        cin >> choice;

        switch (choice) {
        case 1:
            SolvingProblem_1();
            break;
        case 7:
            SolvingProblem_7();
            break;
        case 9:
            SolvingProblem_9();
            break;
        case 10:
            SolvingProblem_10();
            break;
        case 14:
            SolvingProblem_14();
            break;
        case 15:
            SolvingProblem_15();
            break;
        case 17:
            SolvingProblem_17();
            break;
        case 19:
            SolvingProblem_19();
            break;
        case 20:
            SolvingProblem_20();
            break;
        case 21:
            SolvingProblem_21();
            break;
        case 22:
            SolvingProblem_22();
            break;
        case 31:
            SolvingProblem_31();
            break;
        case 35:
            SolvingProblem_35();
            break;
        case 39:
            SolvingProblem_39();
            break;
        case 40:
            SolvingProblem_40();
            break;
        case 42:
            SolvingProblem_42();
            break;
        case 43:
            SolvingProblem_43();
            break;
        case 47:
            SolvingProblem_47();
            break;
        case 48:
            SolvingProblem_48();
            break;
        case 51:
            SolvingProblem_51();
            break;
        case 0:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
        system("pause");
        system("cls");

    } while (choice != 0);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file