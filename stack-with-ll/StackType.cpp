#include "StackType.h"

template <class ItemType>
StackType<ItemType>::StackType()
{
    top=-1;

}

template <class ItemType>
void StackType<ItemType>::push(ItemType value)
{
    l.addNodeAtFront(value);

    top++;

}

template <class ItemType>
void StackType<ItemType>::Pop()
{
 l.deleteFirstNode();
}




template <class ItemType>
void StackType<ItemType>::Print()
{
    l.printNodes();

}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{

    return l.printHead();
}

template <class ItemType>
StackType<ItemType>::~StackType()
{

}

template class StackType<int>;