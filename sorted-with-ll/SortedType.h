#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

#include "LinkedList.h"

#pragma once

template <class ItemType>
class SortedType
{
public:
    SortedType();

    void MakeEmpty();
    bool isFull();
    int LengthIs();

    void InsertItem(ItemType);
    void DeleteItem(ItemType);

    void RetriveItem(ItemType &, bool &);

    void printList();

    void ResetList();
    void GetNextItem(ItemType &);

private:

    LinkedList<ItemType> l;

    int length;
    
    int currentPos;

};

#endif

template class SortedType<int>;