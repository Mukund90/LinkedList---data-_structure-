#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

void ReverseDoublyLinkedList(LinkedNode *&head)
{
    if (head == NULL)
        return;

    LinkedNode *temp = NULL;
    LinkedNode *curr = head;

    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    // temp is now at the new head
    if (temp != NULL)
        head = temp->prev;
}
