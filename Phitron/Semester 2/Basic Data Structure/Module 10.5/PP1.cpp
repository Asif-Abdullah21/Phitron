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

int size(Node *head) // reference to dhore rakhi nai tai main achange hbe na
{
    int cnt =0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void cmp(Node *head1,Node *head2)
{
    bool flag = true;
    while (head1 != NULL)
    {
        if(head1->val != head2->val)
        {
            flag = false;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val==-1) break;
       insert_tail(head1,tail1,val);
    }

    Node * head2 = NULL;
    Node * tail2 = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val==-1) break;
       insert_tail(head2,tail2,val);
    }

    if(size(head1)!=size(head2)) cout << "NO\n";
    else cmp(head1,head2);
    
    
     
    return 0;
}
