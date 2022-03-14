#include "UnsortedType.h"
#include "StudentInfo.h"
// TASK 2 STUDENTINFO COMPLETED!

#include <iostream>

using namespace std;

int main()
{

    StudentInfo s1(2001, "Akib", 3.25);
    StudentInfo s2(2002, "Raib", 2.25);
    StudentInfo s3(2001, "Sakib", 1.25);

    UnsortedType<StudentInfo> u;

    u.InsertItem(s1);
    u.InsertItem(s2);
    u.InsertItem(s3);

    for (int i = 0; i < u.LengthIs(); i++)
    {
        StudentInfo s;

        s = u.getNextItem();

        s.printInfo();
    }

    return 0;
}