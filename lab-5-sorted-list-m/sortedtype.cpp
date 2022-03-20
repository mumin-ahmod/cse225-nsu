#include "sortedtype.h"

#include <iostream>

using namespace std;

template <class ItemType>
sortedtype<ItemType>::sortedtype()
{
    length = 0;
    currentPos = -1;
}


template <class ItemType>
void sortedtype<ItemType>::MakeEmpty()
{
    length = 0;
}

template <class ItemType>
bool sortedtype<ItemType>::isFull()
{
    return (length == MAX_ITEMS);
}


template <class ItemType>
int sortedtype<ItemType>::LengthIs()
{
    return length;
}



template <class ItemType>
void sortedtype<ItemType>::InsertItem(ItemType v)
{

    int location = -1;

    if (length == 0)
    {
        info[length] = v;
        length++;
    }
    else
    {

        for (int i = 0; i < length; i++)
        {

            if (info[i] > v)
            {

                location = i;
                length++;

                for (int j = length; j >= location; j--)
                {
                    info[j] = info[j - 1];
                }

                info[location] = v;

                break;
            }
        }

        if (location == -1)
        {
            info[length] = v;
            length++;
        }
    }
}



template <class ItemType>
void sortedtype<ItemType>::DeleteItem(ItemType item)
{

    for (int i = 0; i < length; i++)
    {
        if (info[i] == item)
        {
            for (int j = i; j < length; j++)
            {
                info[j] = info[j + 1];
            }

            length--;

            break;
        }
    }
}

template <class ItemType>
void sortedtype<ItemType>::RetriveItem(ItemType &v, bool& found)
{

    int first = 0, last = length - 1;

    bool moreToSearch = true;

    while (moreToSearch)
    {
        int mid = (first + last) / 2;

        if (info[mid] > v)
        {

            last = mid - 1;

            moreToSearch = (first<=last);
        }
        else if (info[mid] < v)
        {

            first = mid+1;

             moreToSearch = (first<=last);
        }
        else
        {

             moreToSearch = false;

            found=true;

           
        }
    }

  
}


template <class ItemType>
void sortedtype<ItemType>::ResetList()
{
    currentPos=-1;
}


template <class ItemType>
void sortedtype<ItemType>::GetNextItem(ItemType& item)
{

    currentPos++;

    item = info[currentPos];


    if (currentPos == length - 1)
    {
        currentPos = -1;
    }
    
    
}

template class sortedtype<int>;
