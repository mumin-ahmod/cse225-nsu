#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

#pragma once

const int MAX_ITEMS = 10;


template <class ItemType>
class sortedtype
{
public:
    sortedtype();

    void MakeEmpty();
    bool isFull();
    int LengthIs();

    void InsertItem(ItemType);
    void DeleteItem(ItemType);

    void RetriveItem(ItemType&, bool&);

    void ResetList();
    void GetNextItem(ItemType&);


  

private:

    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;

};

#endif