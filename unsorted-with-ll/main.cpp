#include <iostream>

#include "LinkedList.h"
#include "UnsortedType.h"

using namespace std;

int main()
{

    UnsortedType<int> l1;

    l1.InsertItem(5);
    l1.InsertItem(10);
    l1.InsertItem(15);
    l1.InsertItem(20);

    l1.printList();

    return 0;
}