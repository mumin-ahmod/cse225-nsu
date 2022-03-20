
#include "UnsortedType.h"
#include <iostream>

using namespace std;

int main()
{

      int temp;

    UnsortedType<int> u1;

    u1.InsertItem(5);
    u1.InsertItem(10);
    u1.InsertItem(15);
    u1.InsertItem(20);
    u1.InsertItem(55);

   

   

    // for (int i = 0; i < u1.LengthIs(); i++)
    // {
    //      u1.getNextItem(temp);
        
    //     cout<< temp <<endl;
    // }
    
    cout << "//LENGTH:" << u1.LengthIs() << endl;

    u1.deleteItem(2);

    cout<<"L:"<<u1.LengthIs()<<endl;

     u1.InsertItem(65);

    cout<<"L:"<<u1.LengthIs()<<endl;


    

     for (int i = 0; i < u1.LengthIs(); i++)
    {
         u1.getNextItem(temp);
        
        cout<< temp <<endl;
    }
    

    return 0;
}