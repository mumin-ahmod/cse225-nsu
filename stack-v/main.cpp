#include <iostream>

#include "StackType.h"

using namespace std;

int main()
{

int s1=5, s2=4, v;


    StackType<int> o1;
    StackType<int> o2;

    cout<<"s1:";
    for (int i = 0; i < s1; i++)
    {

        cin>>v;

        o1.push(v);
    }
    

    cout<<"s2:";
    for (int i = 0; i < s2; i++)
    {

        cin>>v;

        o2.push(v);
    }

  
  

    while (o1.IsEmpty()==0 && o2.IsEmpty()==0)
    {

        if (o1.Top() > o2.Top())
        {
            cout << o2.Top()<< " ";

            o2.Pop();
        }
        else
        {
            cout << o1.Top() <<" ";
            o1.Pop();
        }
    }

    // cout<<"t:"<< o1.Top() << endl;

    //o1.Print();

    return 0;
}