#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
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

Node *delete_At_Last(Node *&head)
{
    Node *tail = head; // jo aagea badhega
    Node *prev = NULL; // jo pichea rahega
    if (head->next == NULL)
    {
        head = NULL;
        delete tail;
        return head;
    }
    else
    {

        while (tail->next != NULL)
        {
            prev = tail;
            tail = tail->next;
        }
        delete tail;
        prev->next = NULL;
    }
    return head; // return the adress of the head pointer
}
Node *delete_At_particular_locations(Node *&head, int x)
{
    Node *temp = head;
    Node *prev = NULL;
    if (head->next == NULL)
    {
        delete temp;
        head = NULL;
        return head;
    }
    else if (x == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    else
    {
        int positions = x;
        while (positions > 1)
        {
            prev = temp;
            temp = temp->next;
            x--;
        }
        prev->next = temp->next;
        delete temp;
    }
    return head; // return the address of the head pointer
}
Node *delete_At_First(Node *&head)
{
    if (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp; // free the size allacocated in the heap memeory
    }
    return head;
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
    // object
    Node *head;
    head = NULL;
    int nums[] = {10, 20, 30, 40};
    int len = sizeof(nums) / sizeof(nums[0]);
    head = insertion_at_first(nums, 0, len);
    // head = delete_At_First(head);
    // head = delete_At_Last(head);
    // head = delete_At_Last(head);
    // head = delete_At_Last(head); // delete the elements into the last
    head = delete_At_particular_locations(head, 2);
    head = delete_At_particular_locations(head, 1);
    head = delete_At_particular_locations(head, 2);
    print_data(head);
    return 0;
}