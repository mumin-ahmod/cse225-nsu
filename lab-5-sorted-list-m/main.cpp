#include <iostream>

#include "sortedtype.h"

using namespace std;

int main()
{

  sortedtype<int> u1;

  u1.InsertItem(5); // adding 1st
  u1.InsertItem(10);
  u1.InsertItem(15);
  u1.InsertItem(20); // adding at Last

  u1.InsertItem(2); // adding at first

  u1.DeleteItem(15);

  u1.DeleteItem(55);

  // for (int i = 0; i < u1.LengthIs(); i++)
  // {
  //      u1.getNextItem(temp);

  //     cout<< temp <<endl;
  // }

  // cout << "//LENGTH:" << u1.LengthIs() << endl;

  // u1.deleteItem(2);

  cout << "L:" << u1.LengthIs() << endl;

  // u1.InsertItem(65);

  //  cout<<"L:"<<u1.LengthIs()<<endl;

  int temp;

  for (int i = 0; i < u1.LengthIs(); i++)
  {
    u1.GetNextItem(temp);

    cout << temp << endl;
  }

  // int n = 15;
  // bool found = false;
  // u1.RetriveItem(n, found);
  // cout << found << endl;

  return 0;
}