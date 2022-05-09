#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#pragma once

const int MAX_ITEMS = 10;

template <class ItemType>
class UnsortedType
{
public:
    UnsortedType();
   

    void MakeEmpty();

    bool IsFull();
    int LengthIs();

    void InsertItem(ItemType);

    ItemType getNextItem();

    void deleteItem(ItemType v);

     ~UnsortedType();



private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif

///---------------------------------------------CONTENTS OF UNSORTEDTYPE.CPP

#include "UnsortedType.h"


#include <iostream>

using namespace std;


template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType value)
{
    info[length] = value;
    length++;
}

template <class ItemType>
ItemType UnsortedType<ItemType>::getNextItem()
{
    int item =  currentPos+1;


    if (currentPos == length-1)
    {
        currentPos = -1;
     }else{
        currentPos = item;
    }
   
    return info[item];

    
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}



template <class ItemType>
void UnsortedType<ItemType>::deleteItem(ItemType item)
{

    for (int i = 0; i < length; i++)
    {
        if (info[i] == item)
        {
            info[i] = info[length - 1];
            
            length--;

            break;
        }

        
    }
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
}

// template class UnsortedType<ItemType>;
