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

void insert_head(Node *&head,Node *&tail,int val)
{
    Node *NewNode = new Node(val);
    if(head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }
    NewNode->next = head;
    head->prev = NewNode;
    head = NewNode;
}

void insert_any_pos(Node *head,int pos,int val)
{
    Node *NewNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }

    NewNode->next = temp->next;
    NewNode->prev = temp;
    temp->next->prev = NewNode;
    temp->next = NewNode;
    
}

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *NewNode = new Node(val);
    if(tail==NULL)
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

void print_normal(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << endl;
    
}

void print_reverse(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << ' ';
        tail = tail->prev;
    }
    cout << endl;
    
}


int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int t;
    cin >> t;

    while (t--)
    {
       int pos, val;
       cin >> pos >> val;

       if(pos>size(head)) cout << "Invalid\n";
       else if(pos==0)
       {
            insert_head(head,tail,val);
            print_normal(head);
            print_reverse(tail);
       }
       else if(pos==size(head))
       {
            insert_tail(head,tail,val);
            print_normal(head);
            print_reverse(tail);
       }
       else{
            insert_any_pos(head,pos,val);
            print_normal(head);
            print_reverse(tail);
       }
    }

   
    
    
     
    return 0;
}
