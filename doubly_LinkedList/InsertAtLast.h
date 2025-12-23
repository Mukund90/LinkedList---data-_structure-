#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

void InsertAtLast(LinkedNode *&head, const vector<int> &arr)
{
    // LinkedNode *tail = head;

    // // move tail to last node
    // if (tail != NULL)
    // {
    //     while (tail->next != NULL)
    //     {
    //         tail = tail->next;
    //     }
    // }
    LinkedNode *tail = head;

    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            LinkedNode *temp = new LinkedNode(arr[i]);
            head = temp;
            tail = temp;
        }
        else
        {
            LinkedNode *temp = new LinkedNode(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = tail->next;
        }
    }
}
