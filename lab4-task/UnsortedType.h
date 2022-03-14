#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#pragma once

const int MAX_ITEMS = 5;

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

    void getNextItem(ItemType&);

    void deleteItem(ItemType v);



private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif