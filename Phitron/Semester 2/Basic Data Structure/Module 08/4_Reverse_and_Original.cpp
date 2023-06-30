#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node * new_node = new Node(val);
    if(head==NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
    
}

void display_reversly(Node *head)
{
    Node *temp = head;

    if(temp == NULL) return;

    display_reversly(temp->next);
    cout << temp->val << " ";
}

void display_original(Node *head)
{
    Node *temp = head;

    if(temp == NULL) return;

    cout << temp->val << " ";
    display_original(temp->next);
}



int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if(val == -1) break;

        insert_tail(head,tail,val);
    }

    display_reversly(head);
    cout << endl;
    display_original(head);
    

    return 0;
}