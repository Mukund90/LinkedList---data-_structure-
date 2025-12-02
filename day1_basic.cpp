#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

int main()
{
    // // static  node
    // Node p(10);
    // cout << " data " << p.data << endl;
    // cout << " next " << p.next << endl;
    // return 0;

    Node *temp = new Node(10);
    cout << " data " << temp->data << endl;
    cout << " next " << temp->next << endl;
}