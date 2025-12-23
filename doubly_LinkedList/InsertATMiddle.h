#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

void InsertAtMiddle(LinkedNode *&head, int pos)
{
    if (pos == 0)
    {
        // head  NULL ho saktea hai
        if (head == NULL)
        {
            LinkedNode *newNode = new LinkedNode(0);
            head = newNode;
        }
        // head mera null nhi ho saktea hai
        else
        {
            LinkedNode *temp = new LinkedNode(1);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {

        LinkedNode *curr = head;
        while (curr->next != NULL && pos > 1)
        {
            curr = curr->next;
            pos--;
        }
        // insertAt Last pe ho saktea hai
        if (curr->next == NULL && pos > 1)
        {
            LinkedNode *newNode = new LinkedNode(10);
            curr->next = newNode;
            newNode->prev = curr;
        }
        else
        {
            LinkedNode *newNode = new LinkedNode(11);
            newNode->next = curr->next;
            newNode->prev = curr;
            curr->next = newNode;
            if (newNode->next != NULL)
            {
                newNode->next->prev = newNode;
            }
        }
    }
}