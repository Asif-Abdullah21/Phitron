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

    for (Node * i = head; i->next != NULL; i=i->next)
    {
        for (Node * j = i->next; j != NULL; j=j->next)
        {
            if(i->val>j->val) swap(i->val,j->val);
        }
    }
    
    print(head);
     
    return 0;
}
