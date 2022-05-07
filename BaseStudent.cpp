#include "BaseStudent.h"
#include "IStudent.h"
#include <iostream>
#include <vector>

using namespace std;
BaseStudent::BaseStudent()
{
}

// void BaseStudent::getdata()
// {
//     std::cout << "hello";
// }

// void BaseStudent ::showdata()
// {
//     std::cout << "bye";
// }

float BaseStudent::CalcGPA(std::vector<int> v1, std::vector<std::string> v2)
{
    float total = 0.00;
    for (int i = 0; i < v2.size(); i++)
    {
        total += v1[i];
    }
    int d = v1.size();
    total /= d;
    return total;
}

float BaseStudent::setGPA()
{
    float t = 0.00;
    return t;
}

float BaseStudent::GetAttendance()
{
    float t = 0.00;
    return t;
}

string BaseStudent::rname()
{
    return name;
}

float BaseStudent::getGPA() const
{
    return gpa;
}

std::string BaseStudent::result()
{
    if (gpa >= 5.0)
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }

    return status;
}
// bool BaseStudent::operator<(const IStudent &s) const
// {
//     return this->getGPA() < s.getGPA();
// }