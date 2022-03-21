#include<iostream>

#include "QueType.h"


using namespace std;

int main(){

    QueType<int> o1;

    o1.Enqueue(15);
    o1.Enqueue(20);
    o1.Enqueue(30);
    o1.Enqueue(10);


    
    int n;
    o1.Dequeue(n);

    o1.Print();



return 0;

}