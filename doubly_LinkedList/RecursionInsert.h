#include <iostream>
using namespace std;
#include "template.h"
#include <bits/stdc++.h>

LinkedNode *InsertATEnd(vector<int> arr, int idx, int size, LinkedNode *back)
{
    // Base case
    if (idx == size)
        return NULL;

    LinkedNode *temp = new LinkedNode(arr[idx]);
    temp->prev = back;
    temp->next = InsertATEnd(arr, idx + 1, size, temp);
    return temp;
}
