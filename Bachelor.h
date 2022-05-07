#ifndef BACHELOR_H
#define BACHELOR_H
#include "BaseStudent.h"
#include "IStudent.h"
#include <string>
#include <iostream>
#include <vector>

#pragma once

class Bachelor : public BaseStudent
{
public:
    Bachelor();
    Bachelor(std::string, int, std::string, std::vector<std::string>, std::vector<int>);
    ~Bachelor();
    // void getdata() override;
    void showdata() override;
    std::string result() override;

    float setGPA() override;
    float GetAttendance() override;

private:
    std::string major;

    std::vector<std::string> b_courses;
    std::vector<int> b_marks;
    float attper;
};

#endif