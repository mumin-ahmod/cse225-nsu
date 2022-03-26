#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#include "LinkedList.h"

#pragma once

template <class ItemType>
class UnsortedType
{

public:
    UnsortedType();
    ~UnsortedType();

    void MakeEmpty();
    bool IsFull();
    int LengthIs();

    void InsertItem(ItemType);

    void deleteItem(ItemType v);

    void RetriveItem(ItemType &, bool &);

    void ResetList();

    void printList();

    void getNextItem(ItemType &);

private:

    LinkedList<ItemType> l;

    int length;
    // NodeType *listdata;
    int currentPos;
};

#endif