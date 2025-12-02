#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void push_last(Node *&head, Node *&Tail)
{
    int arr[] = {100, 200};
    int k = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < k; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            Tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            // Node *tail = head;
            // while (tail->next != NULL)
            // {
            //     tail = tail->next;
            // }
            Tail->next = temp;
            Tail = Tail->next;
        }
    }
}

void push_Middle(int x, int val, Node *&head)
{
    Node *temp = head;
    while (x != 0)
    {
        temp = temp->next;
        x--;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

Node *insertAtMiddle(Node *head, int x, int val)
{
    if (x == 0)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        cout << " adress of the head is " << &(*newNode) << endl;
        return newNode;
    }
    if (head == NULL)
        return head;

    head->next = insertAtMiddle(head->next, x - 1, val);
    cout << " adress of the head is " << &(*head) << endl;
    return head;
}

void push_first(Node *&head, Node *&Tail)
{
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    // assigned
    for (int i = 0; i < len; i++)
    {
        if (head == NULL) // head Null hai
        {
            head = new Node(arr[i]);
            Tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
            // Tail = Tail->next;
        }
    }
}
void data_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << " data " << temp->data << " = " << " adddress " << " " << temp->next << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head;
    head = NULL;
    Node *Tail = NULL;

    push_first(head, Tail); // push the  vale in front
    push_last(head, Tail);
    // push_Middle(2, 9999, head);
    Node *temp1 = NULL;
    temp1 = insertAtMiddle(head, 2, 1001);
    cout << " adress of the temp1 " << &(*temp1) << endl;
    head = temp1;
    data_print(head); // print tha data
    return 0;
}