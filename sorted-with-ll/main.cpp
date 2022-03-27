#include "LinkedList.h"

#include "SortedType.h"


#include <iostream>

using namespace std;


int main()
{

    SortedType<int> l1;

    l1.InsertItem(5);
    l1.InsertItem(1);
    l1.InsertItem(15);
    l1.InsertItem(20);

    l1.InsertItem(2);

    l1.DeleteItem(15);

    l1.printList();

    return 0;
}