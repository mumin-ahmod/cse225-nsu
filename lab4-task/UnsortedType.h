#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#pragma once

const int MAX_ITEMS = 20;

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

    void getNextItem(ItemType &);

private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif