#ifndef STACKTYPE_H
#define STACKTYPE_H

#pragma once

const int MAX_ITEMS = 20;

class FullStack{

    //when stack is full.

};

class EmptyStack{

//when stack is empty.
};

template <class ItemType>
class StackType
{
public:
    StackType();

    bool IsFull();
    bool IsEmpty();

    void push(ItemType);

    void Pop();

    ItemType Top();

    void Print();


    ~StackType();

private:

    int top;
    ItemType items[MAX_ITEMS];



};

#endif