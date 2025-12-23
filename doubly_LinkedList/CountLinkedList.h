#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"

int CountNodes(LinkedNode *head)
{
    int cnt = 0;
    LinkedNode *curr = head;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    return cnt;
}