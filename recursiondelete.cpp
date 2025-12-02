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

Node *insertion_at_first(int arr[], int idx, int len)
{
    // base case
    if (idx == len)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[idx]);
    temp->next = insertion_at_first(arr, idx + 1, len);
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

Node *delete_at_any_aparticular_pos(Node *head, int x)
{
    // base case
    if (x == 1)
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }

    head->next = delete_at_any_aparticular_pos(head->next, x - 1);
    return head;
}

int main()
{
    Node *head;
    head = NULL;
    int arr[] = {10, 20, 30, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    head = insertion_at_first(arr, 0, len);
    cout << " before deleted " << endl;
    print_data(head);
    cout << endl;
    cout << " after deleted " << endl;
    head = delete_at_any_aparticular_pos(head, 3);
    print_data(head); // print the data
    return 0;
}
