#ifndef TEMPLATE_H
#define TEMPLATE_H

// Template of the Doubly Linked List
struct LinkedNode
{
public:
    int data;
    LinkedNode *prev;
    LinkedNode *next;
    LinkedNode(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

#endif
