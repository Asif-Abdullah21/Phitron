#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int size(Node * head)
{
    Node * temp = head;
    int cnt =0;
    while (temp != NULL)
    {
        cnt++;
        temp  = temp->next;
    }

    return cnt;
    
}

void insert_head(Node * &head,int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    
}

void insert(Node *head,int pos,int val)
{
    Node * new_node = new Node(val);

    if(head == NULL)
    {
        head = new_node;
        return;
    }

    Node * temp = head;

    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    // tmp = pos-1
    new_node->next = temp->next;
    temp->next = new_node;
    
}

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node * new_node = new Node(val);
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
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
    Node * head =  new Node(10);
    Node * a =  new Node(20);
    Node * b =  new Node(30);
    Node * c =  new Node(40);
    Node * d =  new Node(50);
    Node * tail = d;

    cout << "tail : " << tail->val << endl;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    display(head);

    int pos,val;
    cin >> pos >> val;
    //insert(head,2,100);
    if(pos>size(head) || pos<0)
    {
        cout << "Invalid Index\n";
    }
    else if(pos==0) insert_head(head,val);
    else if(pos==size(head)) insert_tail(head,tail,val);//head pathacchi karon head to null o hoite pare tokhon head r tail same
    else insert(head,pos,val);

    display(head);

    cout << "tail : " << tail->val << endl;


     
    return 0;
}