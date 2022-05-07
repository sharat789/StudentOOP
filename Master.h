#ifndef MASTER_H
#define MASTER_H
#include "BaseStudent.h"
#include "IStudent.h"
#include <string>
#include <iostream>
#include <vector>

#pragma once

class Master : public BaseStudent
{
public:
    Master();
    Master(std::string, int, std::string, std::vector<std::string>, std::vector<int>, std::string, int);
    ~Master();
    void showdata() override;
    float CalcGPA(std::vector<int>, std::vector<std::string>) override;
    float setGPA() override;

private:
    std::string speciality;
    std::vector<std::string> m_courses;
    std::vector<int> m_marks;
    std::string thesis;
    int thesis_grade;
};

#endif