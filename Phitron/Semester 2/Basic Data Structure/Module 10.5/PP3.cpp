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

void check_palindrome(Node *head,Node *tail)
{
    Node * i = head;
    Node * j = tail;
    bool flag = true;
    
    while (i!=j && i->next != j)
    {
        if(i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if(i->val != j->val) flag = false;

    if(flag) cout << "YES\n";
    else cout << "NO\n";
    
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

    check_palindrome(head,tail);
    
     
    return 0;
}
