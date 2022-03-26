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

    void deleteFirstNode();
    void deleteLastNode();

    void printNodes();

    void makeEmpty();
    void getLength();

    ~LinkedList();

private:
    NodeType *head;
};

#endif