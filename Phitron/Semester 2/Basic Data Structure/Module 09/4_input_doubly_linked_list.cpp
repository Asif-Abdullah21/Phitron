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


void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node * new_node = new Node(val);
    if(tail==NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
 
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;    // tail = tail->next;

}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while (true)
    {
        int val; cin >> val;

        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    print_normally(head);
    print_reverse(tail);
    
    return 0;
}