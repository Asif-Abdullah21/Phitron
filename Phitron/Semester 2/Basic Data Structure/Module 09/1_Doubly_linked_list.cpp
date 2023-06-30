#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * prev;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_normally(Node *head)
{
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

void print_reverse(Node *tail)
{
    Node * temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
    
}

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node *tail = b;
    
    //connection
    head->next = a;
    a->next = b;
    a->prev = head;
    b->prev = a;

    print_normally(head);
    print_reverse(tail);

    return 0;
}