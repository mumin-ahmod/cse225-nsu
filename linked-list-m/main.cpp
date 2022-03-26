#include <iostream>

#include "LinkedList.h"

using namespace std;

int main()
{

    LinkedList<int> l1;

    l1.addNodeAtFront(5);
    l1.addNodeAtFront(10);
    l1.addNodeAtFront(15);
    l1.addNodeAtFront(20);

    l1.addNodeAtLast(2);



    //l1.printNodes();

    l1.findLarge();

    return 0;
}