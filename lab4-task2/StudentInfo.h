#ifndef STUDENTINFO_H
#define STUDENTINFO_H


#include<iostream>

using namespace std;

#pragma once

class StudentInfo
{
public:
    StudentInfo();

    StudentInfo(int,string,double);

    void printInfo();

    ~StudentInfo();

private:

    int id;
    string name;
    double cgpa;



};

#endif