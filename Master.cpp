#include "Master.h"
#include "BaseStudent.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
Master::Master()
{
    type = 2;
}
Master::Master(std::string s, int a, std::string m, std::vector<std::string> c, std::vector<int> x, std::string t, int t_marks)
{
    name = s;
    age = a;
    speciality = m;
    m_courses = c;
    m_marks = x;
    thesis = t;
    thesis_grade = t_marks;
    type = 2;
}

Master::~Master()
{
}

void Master::showdata()
{
    cout << name << " " << age << " " << speciality << endl;
    for (int i = 0; i < m_courses.size(); i++)
    {
        cout << m_courses[i] << " " << m_marks[i];
        cout << endl;
    }
    cout << "Master";

    cout << endl;
    cout << thesis << " " << thesis_grade;
}

float Master::CalcGPA(std::vector<int> v1, std::vector<std::string> v2)
{
    float total = 0.00;
    float total1 = 0.00;
    for (int i = 0; i < v2.size(); i++)
    {
        total1 += v1[i];
    }
    int d = v1.size();
    total1 /= d;
    total = (0.7 * total1) + (0.3 * thesis_grade);
    return total;
}

float Master::setGPA()
{
    gpa = CalcGPA(m_marks, m_courses);
    return gpa;
}