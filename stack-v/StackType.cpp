

#include<iostream>

#include "StackType.h"

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{

    top= -1;

}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{

    return (top == MAX_ITEMS-1);
    
}


template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    
    return (top == -1);
    
}

template <class ItemType>
void StackType<ItemType>::push(ItemType v)
{

    try{

        if(IsFull()) 
        throw FullStack();

    top++;
    items[top] = v;

    }
    catch(FullStack x){
        cout<< "stack is already full"<<endl;

    }
    
}


template <class ItemType>
ItemType StackType<ItemType>::Top()
{

return items[top];

}




template <class ItemType>
void StackType<ItemType>::Print()
{

    if(IsEmpty()){
        cout<< "stack is empty"<< endl;
    }
    else{
        
    for (int i = 0; i <=top; i++)
    {
        cout<< items[i] << endl;
    }

    }
    
    

}




template <class ItemType>
StackType<ItemType>::~StackType()
{

}

template class StackType<int>;