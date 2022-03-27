#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#pragma once

template <class ItemType>
class LinkedList
{

    struct NodeType
    {
        ItemType data;
        NodeType *next;
    };

public:
    LinkedList();

    void addNodeAtFront(ItemType);
    void addNodeAtLast(ItemType);

    void addNodeSorted(ItemType);

    void deleteFirstNode();
    void deleteLastNode();

    void deleteNode(ItemType);

    void printNodes();

    void makeEmpty();
    void getLength();

    ~LinkedList();

private:
    NodeType *head;
};

#endif

///--> .cpp file

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
        head = n;
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
void LinkedList<ItemType>::addNodeSorted(ItemType data)
{
    NodeType *n = new NodeType;

    n->data = data;
    n->next = NULL;

    if (head == NULL)
    {
        head = n;
    }
    else if (head->data > data)
    {
        NodeType *temp;

        temp = head;

        head = n;

        n->next = temp;
    }
    else
    {
        NodeType *temp;
        NodeType *current = head;

        while (current->next != NULL)
        {
            if (current->next->data > data)
            {

                break;
            }
            current = current->next;
        }
        temp = current->next;
        current->next = n;

        n->next = temp;
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
void LinkedList<ItemType>::deleteNode(ItemType value)
{ // delete anywhere / search and delete

    NodeType *nn;
    int c = 0;

    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }
    else if (head->data == value)
    {
        deleteFirstNode();
    }
    else
    {
        NodeType *current = head;

        while (current->next != NULL)
        {
            if (current->next->data == value)
            {
                c++;
                break;
            }

            current = current->next;
        }

        if (c == 0)
        {
            cout << "Not Found" << endl;
        }

        nn = current->next->next;

        delete current->next;

        current->next = nn;
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