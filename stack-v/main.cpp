#include<iostream>

#include "StackType.h"



using namespace std;

int main(){


StackType<int> o1;


o1.push(5);
o1.push(10);
o1.push(25);
o1.push(30);
o1.push(2);



   cout<< o1.Top() << endl;




return 0;

}