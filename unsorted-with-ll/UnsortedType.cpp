#include "UnsortedType.h"
#include "LinkedList.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{


    length =0;

   // listdata = NULL;
    currentPos = -1;

}


template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType value)
{
    
    l.addNodeAtLast(value);
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::printList()
{
    l.printNodes();
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{

}

template class UnsortedType<int>;