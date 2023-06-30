#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;
    Node * prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *NewNode = new Node(val);
    if(head==NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    NewNode->prev = tail;
    tail->next = NewNode;
    tail = NewNode;
}

void reverse(Node *head,Node *tail)
{
    Node * i = head;
    Node * j = tail;
    
    while (i!=j && i->next != j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }

    swap(i->val,j->val);
    
}

void print(Node *head) // reference to dhore rakhi nai tai main achange hbe na
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val==-1) break;
       insert_tail(head,tail,val);
    }

    reverse(head,tail);
    print(head);
    
     
    return 0;
}
