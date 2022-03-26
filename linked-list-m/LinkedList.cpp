#include <iostream>

#include "LinkedList.h"

using namespace std;

template <class ItemType>
LinkedList<ItemType>::LinkedList()
{
    head = NULL;
}

template <class ItemType>
void LinkedList<ItemType>::addNodeAtFront(ItemType data)
{
    NodeType *n = new NodeType;

    n->data = data;

    n->next = head;

    head = n;
}

template <class ItemType>
void LinkedList<ItemType>::addNodeAtLast(ItemType data)
{
    NodeType *n = new NodeType;

    n->data = data;
    n->next = NULL;

    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }
    else
    {

        NodeType *current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = n;
    }
}

template <class ItemType>
void LinkedList<ItemType>::deleteFirstNode()
{

    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }
    else
    {

        head = head->next;
    }
}

template <class ItemType>
void LinkedList<ItemType>::deleteLastNode()
{

    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }
    else if (head->next == NULL)
    {
        deleteFirstNode();
    }

    else
    {
        NodeType *current = head;

        while (current->next->next != NULL)
        {

            current = current->next;
        }

        delete current->next;

        current->next = NULL;
    }
}

template <class ItemType>
void LinkedList<ItemType>::printNodes()
{
    NodeType *current = head;

    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }

    else
    {

        cout << "head-> ";

        // for the last element, current is not null,
        // but current->next is definetly null
        // but the last-last element will be current is null.

        while (current != NULL)
        {
            cout << current->data << "->";

            current = current->next;
        }
    }
}

template <class ItemType>
LinkedList<ItemType>::~LinkedList()
{

    // NodeType *current = head;

    // while (current != NULL)
    // {
    //     NodeType *temp = current->next;

    //     delete current;

    //     current = temp;
    // }
}

template class LinkedList<int>;