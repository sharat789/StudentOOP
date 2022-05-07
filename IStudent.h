#ifndef ISTUDENT_H
#define ISTUDENT_H
#include <vector>
#include <string>
#pragma once

class IStudent
{
public:
    // virtual void getdata() = 0;
    virtual void showdata() = 0;
    virtual float CalcGPA(std::vector<int>, std::vector<std::string>) = 0;
    // virtual float CalcGPA() = 0;
    virtual float setGPA() = 0;
    virtual float getGPA() const = 0;
    // virtual bool operator<(const IStudent &s) const = 0;
    virtual std::string result() = 0;
    virtual float GetAttendance() = 0;
    virtual std::string rname() = 0;

private:
};

#endif