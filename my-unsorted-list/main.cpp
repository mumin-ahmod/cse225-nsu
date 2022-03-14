
#include "UnsortedType.h"
#include <iostream>

using namespace std;

int main()
{

    UnsortedType<int> u1;

    u1.InsertItem(5);
    u1.InsertItem(10);
    u1.InsertItem(15);
    u1.InsertItem(20);
    u1.InsertItem(55);

    // int temp;

    // for (int i = 0; i < u1.LengthIs(); i++)
    // {
    //      u1.getNextItem(temp);

    //     cout<< temp <<endl;
    // }

    // cout << "//LENGTH:" << u1.LengthIs() << endl;

    u1.deleteItem(10);
    u1.InsertItem(65);

    u1.deleteItem(65);
    u1.InsertItem(65);
   

    for (int i = 0; i < u1.LengthIs(); i++)
    {
       
        cout << u1.getNextItem() << endl;
    }

    return 0;
}