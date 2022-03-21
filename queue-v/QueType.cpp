#include<iostream>

#include "QueType.h"

using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 101;

    front = maxQue - 1;
    rear = maxQue - 1;

    items = new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1;

    front = maxQue - 1;
    rear = maxQue - 1;

    items = new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
    delete[] items;
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{

    front = maxQue - 1;
    rear = maxQue - 1;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{

    return (front == rear);
}

template <class ItemType>
bool QueType<ItemType>::IsFull()
{

    return ((rear + 1) % maxQue == front);

    // if we increase rear by 1 and see it is the front
    // that means front still has some value
    // so do not have any block left.
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType v)
{

    if (IsFull())
    {
        std::cout << "queue overflow" << std::endl;
    }
    else
    {
        rear = (rear + 1) % maxQue;
        // 1st: increase rear by 1 position.
        // 2nd: for the last item, we mod and get 0, so go back to 0.

        items[rear] = v;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue()
{

    if (IsEmpty())
    {
        //throw EmptyQueue();

        cout<< "Queue underflow"<<endl;
    }
    else
    {
        // the block before the front is empty.

        front = (front + 1) % maxQue;

        
    }
}

template <class ItemType>
void QueType<ItemType>::Print()
{

    if (IsEmpty())
    {

        cout << "queue is empty" <<endl;
    }

    else
    {
        for (int i = (front+1) % maxQue; i <=rear; i++)
        {
           cout<< items[i] << endl;
        }
    }
}




template class QueType<int>;