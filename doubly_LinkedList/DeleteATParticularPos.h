#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

// delete  at any particlular Positions
void DeleteATParticularPos(LinkedNode *&head, int pos)
{
    if (pos == 0)
    {
        // head NULL HO Saktea hai
        if (head == NULL)
        {
            cout << "Linked list is empty " << endl;
            return;
        }
        else
        {
            LinkedNode *temp = head;
            if (head->next != NULL)
            {
                head = head->next;
                head->prev = NULL;
                delete temp;
            }
            else
            {
                head = NULL;
                delete temp;
            }
        }
    }
    else
    {
        // delete at last positions
        LinkedNode *curr = head;
        while (pos > 0)
        {
            curr = curr->next;
            pos--;
        }
        if (curr->next == NULL)
        {
            // last positions to delete element
            curr->prev->next = NULL;
            curr->prev = NULL;
            delete curr;
        }
        else
        {
            // delete at any positons
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            curr->next = NULL;
            curr->prev = NULL;
            delete curr;
        }
    }
}