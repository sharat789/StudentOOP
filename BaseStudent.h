#ifndef BASESTUDENT_H
#define BASESTUDENT_H
#include "IStudent.h"
#include <string>
#include <iostream>

#pragma once

class BaseStudent : public IStudent
{
private:
public:
    BaseStudent();

    // void getdata() override;
    // void showdata() override;
    float CalcGPA(std::vector<int>, std::vector<std::string>) override;
    float setGPA() override;
    float GetAttendance() override;
    std::string rname() override;
    float getGPA() const override;
    std::string result() override;
    // bool operator<(const IStudent &s) const override;

protected:
    std::string name;
    int type;
    int age;
    std::string status;
    float gpa;
};

#endif