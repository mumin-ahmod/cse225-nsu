#include<iostream>

#include "QueType.h"


using namespace std;

int main(){

    QueType<int> o1;

    o1.Enqueue(15);
    o1.Enqueue(20);
    o1.Enqueue(30);
    o1.Enqueue(10);


    
    
    o1.Dequeue();
    o1.Dequeue();
    o1.Dequeue();
    o1.Dequeue();


    o1.Print();

    cout<<"front:"<< o1.Front() <<endl;

   

return 0;

}