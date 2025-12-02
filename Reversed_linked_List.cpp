#include <iostream>
using namespace std;
#include <bits/stdc++.h>

struct LinkedNode
{
    int data;
    LinkedNode *next;

    LinkedNode(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

LinkedNode *insertion_at_first(int arr[], int idx, int len)
{
    // base case
    if (idx == len)
    {
        return NULL;
    }

    LinkedNode *temp;
    temp = new LinkedNode(arr[idx]);
    temp->next = insertion_at_first(arr, idx + 1, len);
    return temp;
}
void print_data(LinkedNode *head)
{
    LinkedNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// using the array to reverse the linked list
// Time complexity : o(n)
// space complexity : o(n)

LinkedNode *Reverse_Node(LinkedNode *&head)
{
    vector<int> nums;

    LinkedNode *temp = head;
    while (temp != NULL)
    {
        nums.push_back(temp->data);
        temp = temp->next;
    }

    int i = nums.size() - 1;
    temp = head;
    while (temp != NULL)
    {
        temp->data = nums[i];
        temp = temp->next;
        i--;
    }
    return head;
}

// using stack to reverse the linked list
// Time complexity : o(n)
// space Complexity :o(n)
LinkedNode *Reversed_Node2(LinkedNode *&head)
{
    stack<int> st1;
    LinkedNode *temp = head;

    while (temp != NULL)
    {
        st1.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL && !st1.empty())
    {
        temp->data = st1.top();
        st1.pop();
        temp = temp->next;
    }
    return head;
}
// Time Complexity o(1);
// space Complexity o(1):
LinkedNode *RevrsedNode(LinkedNode *&head)
{
    LinkedNode *prev, *feat = NULL;
    LinkedNode *curr = head;
    while (curr != NULL)
    {
        feat = curr->next;
        curr->next = prev;
        prev = curr;
        curr = feat;
    }
    head = prev;
    return head;
}
int main()
{
    LinkedNode *head;
    head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    // insertion element into the Node
    head = insertion_at_first(arr, 0, len);
    cout << " Before Rversed " << endl;
    print_data(head);
    cout << endl;
    head = Reverse_Node(head);
    cout << " After Reversed " << endl;
    print_data(head);
    cout << endl;
    cout << " Reversed using stack " << endl;
    head = Reversed_Node2(head);
    print_data(head);
    cout << endl;
    cout << " using optimal solutions " << endl;
    head = Reverse_Node(head);
    print_data(head);

    return 0;
}
