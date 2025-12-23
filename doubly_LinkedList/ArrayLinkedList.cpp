#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "template.h"
#include "InsertAtLast.h"
#include "Traverse.h"
#include "RecursionInsert.h"
#include "InsertATMiddle.h"
#include "CountLinkedList.h"
#include "deleteATFirst.h"
#include "DeleteATLast.h"
#include "DeleteATParticularPos.h"
#include "ReverseDoublyLinkedList.h"
int main()
{
    LinkedNode *head;
    head = NULL;
    vector<int> temp = {1, 3, 4, 5, 6};
    InsertAtLast(head, temp);
    head = InsertATEnd(temp, 0, temp.size(), head);
    cout << "Original LinkedList is " << endl;
    TraverseNode(head);
    // // delete at The first element
    // cout << endl;
    // cout << "After Deleting At First Node " << endl;
    // DeleteATFirst(head);
    // TraverseNode(head);
    // cout << endl;
    // cout << "After deleting at the Last element " << endl;
    // DeleteAtLast(head);
    // TraverseNode(head);
    // cout << endl;
    // cout << "After Deleting at the First Element " << endl;
    // DeleteATFirst(head);
    // TraverseNode(head);
    // cout << endl;
    // cout << endl;
    // cout << "Delete AT Particular Positions " << endl;
    // int TotalNodes = CountNodes(head);
    // cout << "Total Nodes" << " = " << TotalNodes << endl;
    // int Pos;
    // cout << "Enter The positions to delete Node " << endl;
    // cin >> Pos;
    // if (Pos < 0 || Pos >= TotalNodes)
    // {
    //     cout << "Invalid Positions " << endl;
    // }
    // else
    // {
    //     DeleteATParticularPos(head, Pos);
    //     TraverseNode(head);
    // }
    cout << endl;
    cout << "Reversed Array " << endl;
    ReverseDoublyLinkedList(head);
    TraverseNode(head);
    return 0;
}