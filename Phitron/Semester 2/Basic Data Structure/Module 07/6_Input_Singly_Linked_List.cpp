#include <bits/stdc++.h>
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

void Insert_tail(Node *&head, Node *&tail,int val)
{
    Node * NewNode = new Node(val);
    if(head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    tail->next = NewNode;
    tail = NewNode;
}

void display(Node * head)
{
    Node * temp = head;
    while (temp !=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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

        if(val == -1) break;

        Insert_tail(head,tail,val);
    }

    display(head);
    
     
    return 0;
}
