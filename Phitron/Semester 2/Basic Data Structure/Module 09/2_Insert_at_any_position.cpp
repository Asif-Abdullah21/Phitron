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

int size(Node *head)
{
    int cnt=0;
    Node *tmp=head;
    while (tmp != NULL)
    {
       cnt++;
       tmp = tmp->next;
    }

    return cnt;
    
}

void insert_at_head(Node *&head,Node *&tail,int val)
{
    Node * NewNode = new Node(val);
    if(head==NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    NewNode->next = head;
    head->prev = NewNode;
    head = NewNode;

}

void insert_at_position(Node * head,int pos,int val)
{
    Node * NewNode = new Node(val);
    Node * temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }

    NewNode->next = temp->next; //age temp->next ta newnode er next a insert kre nite hbe naile temp er next haray jabe, connection lost hoye jabeeeeeee
    temp->next = NewNode;
    NewNode->next->prev = NewNode;
    NewNode->prev = temp;     //     last er 2 line age pore hoile kono somossa nai

    //same vabei kaje kre:
    // NewNode->next = temp->next;
    // temp->next->prev = NewNode;
    // temp->next = NewNode;
    // NewNode->prev = temp;
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
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node *tail = c;
    
    //connection
    head->next = a;
    a->next = b;
    a->prev = head;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos,val;
    cin >> pos >> val;

    if(pos>size(head)) cout << "Invalid\n";
  
    else if(pos==0) insert_at_head(head,tail,val);
    else if(pos==size(head)) insert_at_tail(head,tail,val);
    else insert_at_position(head,pos,val);

    print_normally(head);
    print_reverse(tail);
    
    return 0;
}