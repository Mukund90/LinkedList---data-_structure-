#include <iostream>
using namespace std;
#include "template.h"

void DeleteATFirst(LinkedNode *&head)
{
    if (head == NULL)
    {
        cout << " Linked List is empty " << endl;
    }
    else
    {
        LinkedNode *temp = head;
        if (head->next != NULL)
        {
            head = head->next;
            head->prev = NULL;
        }
        else
        {
            head = NULL;
            delete temp;
        }
    }
}