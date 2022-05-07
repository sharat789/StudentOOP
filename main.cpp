#include "Bachelor.cpp"
#include "Bachelor.h"
#include "BaseStudent.cpp"
#include "BaseStudent.h"
#include "IStudent.h"
#include "Master.h"
#include "Master.cpp"
#include "Night.h"
#include "Night.cpp"
#include "Menu.h"
#include "Menu.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int choice;
    char x;
    Menu m;
    do
    {
        system("cls");
        cout << "Enter 1 to add Bachelor students" << endl;
        cout << "Enter 2 to add Master students" << endl;
        cout << "Enter 3 to add Night students" << endl;
        cout << "Enter 4 to display all student data" << endl;
        cout << "Enter 5 to display GPA of all students" << endl;
        cout << "Enter 6 to search for student by name" << endl;
        cout << "Enter 7 to sort all students according to GPA" << endl;
        cout << "Enter 8 to show result status of all students" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            m.Bwrite();
            break;
        case 2:
            m.Mwrite();
            break;
        case 3:
            m.Nwrite();
            break;
        case 4:
            m.read();
            break;
        case 5:
            m.showgpa();
            break;
        case 6:
            m.SearchN();
            break;
        case 7:
            m.Sort();
            break;
        case 8:
            m.showResult();
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
        cout << "Enter Y to continue and N to exit: ";

        cin >> x;
    } while (x == 'Y' || x == 'y');
    return 0;
}
