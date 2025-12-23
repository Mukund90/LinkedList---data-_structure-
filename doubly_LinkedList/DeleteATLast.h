#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

void DeleteAtLast(LinkedNode *&head)
{
    if (head == NULL)
    {
        cout << " Linked List is empty " << endl;
        return;
    }
    else
    {
        if (head->next == NULL)
        {
            LinkedNode *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            LinkedNode *tail = head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->prev->next = NULL;
            delete tail;
        }
    }
}