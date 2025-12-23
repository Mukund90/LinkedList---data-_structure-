#include <iostream>
using namespace std;
#include "template.h"

void TraverseNode(LinkedNode *head)
{
    LinkedNode *tail = head;
    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
}