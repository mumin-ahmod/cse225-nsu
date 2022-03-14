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