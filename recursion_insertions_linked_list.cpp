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

// Node *create_Linked_list(int arr[], int index, int len)
// {
//     // base case
//     if (index == len)
//     {
//         return NULL;
//     }

//     // Node created
//     Node *temp = new Node(arr[index]);
//     temp->next = create_Linked_list(arr, index + 1, len);
//     return temp;
// }

// 1st method to insert at start using recursion

Node *insert_at_start(int arr[], int idx, int len, Node *prev)
{
    // base case
    if (idx == len)
    {
        return prev;
    }

    Node *temp = new Node(arr[idx]);
    temp->next = prev;
    return insert_at_start(arr, idx + 1, len, temp);
}

// second Method to insert at end using recursion
Node *insert_at_First2(int arr[], int len)
{
    // base case
    if (len < 0)
    {
        return NULL;
    }

    Node *temp = new Node(arr[len]);
    temp->next = insert_at_First2(arr, len - 1);
    return temp;
}

void print_data(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    Node *head;
    head = NULL;
    head = insert_at_First2(arr, len - 1);
    print_data(head);
    return 0; // return
}