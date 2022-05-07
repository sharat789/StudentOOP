#include "Menu.h"
#include "IStudent.h"
#include "BaseStudent.h"
#include "Bachelor.h"
#include "Master.h"
#include "Night.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
Menu::Menu()
{
    cout << "Welcome\n";
}

void Menu::showcontent()
{
    cout << "Enter:" << endl;
    cout << "1. Add Bachelor Student" << endl;
    cout << "2. Add Master Student" << endl;
    cout << "3. Add Night Student" << endl;
}

Menu::~Menu()
{
}

void Menu::Bwrite()
{

    string n, m;
    int a, n_subjects;
    vector<string> courses;
    vector<int> marks;

    cout << "Enter Name:";
    cin >> n;
    cout << "Enter Age:";
    cin >> a;
    cout << "Enter the Major:";
    cin >> m;
    cout << "Enter the no of Subjects for the semester:";
    cin >> n_subjects;
    cout << "Enter the subjects and their respective marks out of 10";
    cout << endl;
    for (int i = 0; i < n_subjects; i++)
    {
        string s;
        cin >> s;
        courses.push_back(s);
        int x;
        cin >> x;
        marks.push_back(x);
    }
    students.push_back(new Bachelor(n, a, m, courses, marks));
}

void Menu::Mwrite()
{
    string n, m, thesis;
    int a, n_subjects, thesis_m;
    vector<string> courses;
    vector<int> marks;

    cout << "Enter Name:";
    cin >> n;
    cout << "Enter Age:";
    cin >> a;
    cout << "Enter the Speciality:";
    cin >> m;
    cout << "Enter the no of Subjects for the semester:";
    cin >> n_subjects;
    cout << "Enter the subjects and their respective marks out of 10";
    cout << endl;
    for (int i = 0; i < n_subjects; i++)
    {
        string s;
        cin >> s;
        courses.push_back(s);
        int x;
        cin >> x;
        marks.push_back(x);
    }
    cout << endl;
    cout << "Enter Thesis Topic";
    cin >> thesis;
    cout << "Enter Thesis grade";
    cin >> thesis_m;
    students.push_back(new Master(n, a, m, courses, marks, thesis, thesis_m));
}
void Menu::Nwrite()
{

    string n, m;
    int a, n_subjects;
    vector<string> courses;
    vector<int> marks;

    cout << "Enter Name:";
    cin >> n;
    cout << "Enter Age:";
    cin >> a;
    cout << "Enter the Major:";
    cin >> m;
    cout << "Enter the no of Subjects for the semester:";
    cin >> n_subjects;
    cout << "Enter the subjects and their respective marks out of 10";
    cout << endl;
    for (int i = 0; i < n_subjects; i++)
    {
        string s;
        cin >> s;
        courses.push_back(s);
        int x;
        cin >> x;
        marks.push_back(x);
    }
    students.push_back(new Night(n, a, m, courses, marks));
}

void Menu::read()
{
    for (int i = 0; i < students.size(); i++)
    {
        students[i]->showdata();
    }
}

void Menu::showgpa()
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i]->rname() << endl;
        cout << students[i]->setGPA();
        cout << endl;
    }
}

void Menu::showAtt()
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i]->GetAttendance() << "%";
        cout << endl;
    }
}

void Menu::SearchN()
{
    cout << "Enter Name to be Searched:";
    string n;
    int flag = 0;
    cin >> n;
    for (int i = 0; i < students.size(); i++)
    {
        if (n == students[i]->rname())
        {
            students[i]->showdata();
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Name not found";
    }
}

void Menu::Sort()
{
    vector<float> x;
    for (int i = 0; i < students.size(); i++)
    {
        x.push_back(students[i]->setGPA());
    }
    std::sort(students.begin(), students.end(), [](const IStudent *lhs, const IStudent *rhs)
              { return lhs->getGPA() > rhs->getGPA(); });
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i]->rname() << " " << students[i]->getGPA();
        cout << endl;
    }
}

void Menu::showResult()
{
    vector<float> x;
    for (int i = 0; i < students.size(); i++)
    {
        x.push_back(students[i]->setGPA());
    }
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i]->rname() << ":" << students[i]->result();
        cout << endl;
    }
}