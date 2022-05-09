#include <iostream>

#include "StackType.h"
#include "LinkedList.h"

using namespace std;

int main()
{

    StackType<int> s1;

    s1.push(5);
    s1.push(10);
    s1.push(15);
    s1.push(17);
    s1.push(25);

    s1.Pop();

    cout << s1.Top() <<endl;

    s1.Print();

    return 0;
}