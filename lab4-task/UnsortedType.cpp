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
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::getNextItem(ItemType &item)
{
    currentPos++;
    item = info[currentPos];

    if (currentPos == length - 1)
    {
        currentPos = -1;
    }
}

//// delete() implementation-1

// template <class ItemType>
// void UnsortedType<ItemType>::deleteItem(ItemType item)
// {

//     for (int i = 0; i < length; i++)
//     {
//         if (info[i] == item)
//         {
//             info[i] = info[length - 1];
            
//             length--;

//             break;
//         }

        
//     }
// }


template <class ItemType>
void UnsortedType<ItemType>::deleteItem(ItemType item)
{

    for (int i = 0; i < length; i++)
    {
        if (info[i] == item)
        {
            for (int j = i; j < length; j++)
            {
                info[j] = info[j+1];
            }
            
            length--;

            break;
        } 

        
    }

    
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
}

template class UnsortedType<int>;
