#include "SortedType.h"
#include "LinkedList.h"

template <class ItemType>
SortedType<ItemType>::SortedType()
{

    length=0;
    currentPos=-1;

}


template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType value)
{
    l.addNodeSorted(value);
    length++;
    
}


template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType value)
{
    l.deleteNode(value);
}


template <class ItemType>
void SortedType<ItemType>::printList()
{
    l.printNodes();
}

