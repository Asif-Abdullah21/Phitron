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

void display(Node *head)
{
    int mn = INT_MAX,mx = INT_MIN;
    Node * temp = head;

    while (temp != NULL)
    {
        mn = min(mn,temp->val);
        mx = max(mx,temp->val);
        
        temp = temp->next;
    }

    cout << mx << " " << mn << endl;
    
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

    display(head);
    

    return 0;
}