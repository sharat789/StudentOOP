#include "Bachelor.h"
#include "BaseStudent.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
Bachelor::Bachelor()
{
    type = 1;
}
Bachelor::Bachelor(std::string s, int a, std::string m, std::vector<std::string> c, std::vector<int> x)
{
    name = s;
    age = a;
    major = m;
    b_courses = c;
    b_marks = x;
    type = 1;
    int n_days;
    int n_daysatt;
    cout << "Enter total no of days working:";
    cin >> n_days;
    cout << "Enter no of days attended:";
    cin >> n_daysatt;
    attper = float(n_daysatt) / float(n_days);
}

Bachelor::~Bachelor()
{
}

// void Bachelor::getdata()
// {
//     cout << "Enter Name:";
//     cin >> name;
//     cout << "Enter Age";
//     cin >> age;
//     cout << "Enter the Major";
//     cin >> major;
//     cout << "Enter the no of Subjects for the semester:";
//     cin >> n_subjects;
//     cout << "Enter the subjects and their respective marks out of 10";
//     for (int i = 0; i < n_subjects; i++)
//     {
//         string s;
//         cin >> s;
//         b_courses.push_back(s);
//         int x;
//         cin >> x;
//         b_marks.push_back(x);
//     }
// }

void Bachelor::showdata()
{
    cout << name << " " << age << " " << major << endl;
    for (int i = 0; i < b_courses.size(); i++)
    {
        cout << b_courses[i] << " " << b_marks[i];
        cout << endl;
    }
    cout << "Bachelor";
    cout << endl;
}

float Bachelor::setGPA()
{
    gpa = CalcGPA(b_marks, b_courses);
    return gpa;
}

float Bachelor::GetAttendance()
{

    return attper * 100;
}

string Bachelor::result()
{
    if (gpa >= 5.0 && attper > 0.5)
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }

    return status;
}