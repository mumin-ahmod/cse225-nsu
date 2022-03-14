#include "StudentInfo.h"

StudentInfo::StudentInfo()
{

}


StudentInfo::StudentInfo(int i, string n, double c)
{
    id=i;
    name = n;
    cgpa = c;

}

void StudentInfo::printInfo()
{

    cout<< id << " "<< name<<" "<< cgpa << endl;
}


StudentInfo::~StudentInfo()
{

}