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

    

    int LengthIs();

    void InsertItem(ItemType);

    bool isFull();
    void DeleteItem(ItemType);
    bool RetriveItem(ItemType&);

    void ResetList();


    ItemType GetNextItem();


  

private:

    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;

};

#endif