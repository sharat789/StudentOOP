#ifndef NIGHT_H
#define NIGHT_H
#include "BaseStudent.h"
#include "IStudent.h"
#include <string>
#include <iostream>
#include <vector>

#pragma once

class Night : public BaseStudent
{
public:
    Night();
    Night(std::string, int, std::string, std::vector<std::string>, std::vector<int>);
    ~Night();
    void showdata() override;
    float setGPA() override;
    std::string result() override;

private:
    std::string major;
    std::vector<std::string> n_courses;
    std::vector<int> n_marks;
};

#endif