#ifndef MENU_H
#define MENU_H
#include "IStudent.h"
#include "BaseStudent.h"
#include "Bachelor.h"
#include "Master.h"
#include "Night.h"
#include <vector>
#include <iostream>
#include <algorithm>

#pragma once

class Menu
{
public:
    Menu();
    ~Menu();
    void showcontent();
    void Bwrite();
    void Mwrite();
    void Nwrite();
    void read();
    void SearchN();
    void Sort();
    // void gpa();
    void showgpa();
    void showAtt();
    void showResult();

protected:
    std::vector<IStudent *> students;
    // std::vector<float> GPA;
};

#endif