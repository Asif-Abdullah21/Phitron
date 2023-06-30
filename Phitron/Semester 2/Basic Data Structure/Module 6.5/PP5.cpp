// Question: Take a singly linked list as input and print the size of the linked list.


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

void Insert_value(Node *&head,int val)
{
    Node * new_node = new Node(val);
    if(head==NULL)
    {
        head = new_node;
        return;
    }

    Node * temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node; 
}

bool check(Node * head)
{
    Node * temp = head;

    while (temp->next != NULL)
    {
        if(temp->val>temp->next->val)
        {
            return false;
        }
        temp = temp->next;
    }
    return true;
    
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if(val==-1) break;
        Insert_value(head,val);
    }
    
    if(check(head)) cout << "YES\n";
    else cout << "NO\n";

     
    return 0;
}