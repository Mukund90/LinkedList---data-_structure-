#include <iostream>
using namespace std;
#include <bits/stdc++.h>

struct Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

// insertion at first positions
void InsertAtHead(Node *&head, int val)
{
    if (head == NULL)
    {
        Node *temp = new Node(val);
        head = temp;
    }
    else
    {
        Node *temp = new Node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertionAtEnd(Node *&head, int val)
{
    if (head == NULL)
    {
        Node *temp = new Node(val);
        head = temp;
    }
    else
    {
        Node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        Node *temp = new Node(val);
        tail->next = temp;
        temp->prev = tail;
    }
}

void TraverseNode(Node *head)
{
    Node *tail = head;
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->next;
    }
}
int main()
{
    Node *head = new Node(10);
    // cout << "data" << " = " << head->val << endl;
    // cout << "next" << " = " << head->next << endl;
    // cout << "prev" << " = " << head->prev << endl;

    // functions calls
    cout << endl;
    InsertAtHead(head, 100); // Insertion ata begining
    TraverseNode(head);
    cout << endl;

    InsertionAtEnd(head, 1000);
    TraverseNode(head);
    return 0;
}
