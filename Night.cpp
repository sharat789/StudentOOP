#include "Night.h"
#include "BaseStudent.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

Night::Night()
{
    type = 3;
}

Night::Night(std::string s, int a, std::string m, std::vector<std::string> c, std::vector<int> n)
{
    name = s;
    age = a;
    major = m;
    n_courses = c;
    n_marks = n;
    type = 3;
}

Night::~Night()
{
}

void Night::showdata()
{
    cout << name << " " << age << " " << major << endl;
    for (int i = 0; i < n_courses.size(); i++)
    {
        cout << n_courses[i] << " " << n_marks[i];
        cout << endl;
    }
    cout << "Night Student";

    cout << endl;
}

float Night::setGPA()
{
    gpa = CalcGPA(n_marks, n_courses);
    return gpa;
}

string Night::result()
{
    if (gpa >= 4.0)
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }

    return status;
}