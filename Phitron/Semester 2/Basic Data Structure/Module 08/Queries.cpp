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

void insert_head(Node *&head,Node * &tail,int val)
{
    Node *new_node = new Node(val);
    if(head==NULL)
    {
        head = new_node;
        tail = new_node;
    }

    new_node->next = head;
    head = new_node;
}

void insert_tail(Node *&head,Node * &tail,int val)
{
    Node *new_node = new Node(val);
    if(head==NULL)
    {
        head = new_node;
        tail = new_node;
    }

    tail->next = new_node;
    tail = new_node;
}



int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    
    int t;
    cin >> t;

    while (t--)
    {
        int x,val;
        cin >> x >> val;

        if(x==0) insert_head(head,tail,val);
        else insert_tail(head,tail,val);

        cout << head->val << " " << tail->val << endl;

    }
    

    return 0;
}