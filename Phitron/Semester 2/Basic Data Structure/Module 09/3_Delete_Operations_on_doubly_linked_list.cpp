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


void delete_at_position(Node *head,int pos)
{
    Node *temp = head;

    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }

    Node * DeleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete DeleteNode;

}

void delete_head(Node *&head,Node *&tail)
{
    Node * DeleteNode = head;
    head = head->next;
    delete DeleteNode;
    if(head==NULL)  // jodi ektai node thake tokhon er jnno eta kaj krtese
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;//karon ekhon garbage ase

}

void delete_tail(Node *&head,Node *&tail)
{
    Node * DeleteNode = tail;
    tail = tail->prev;
    delete DeleteNode;
    if(tail==NULL) // jodi ektai node thake tokhon er jnno eta kaj krtese
    {
        head = NULL;
        return;
    }
    tail->next = NULL; //karon ekhon garbage ase

    // tail->prev->next = NULL;
    // Node * Delete_Node = tail;
    // tail = tail->prev;
    // delete Delete_Node;

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
    int pos;
    cin >> pos;

    if(pos>=size(head)) cout << "INVALID\n";
    else if(pos==0) delete_head(head,tail);
    else if(pos==size(head)-1) delete_tail(head,tail);
    else delete_at_position(head,pos);


    print_normally(head);
    print_reverse(tail);

    return 0;
}









/*
jodi ektai node thake:

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


void delete_at_position(Node *head,int pos)
{
    Node *temp = head;

    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }

    Node * DeleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete DeleteNode;

}

void delete_head(Node *&head,Node *&tail)
{
    Node * DeleteNode = head;
    head = head->next;
    delete DeleteNode;
    if(head==NULL)  // jodi ektai node thake tokhon er jnno eta kaj krtese
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;//karon ekhon garbage ase

}

void delete_tail(Node *&head,Node *&tail)
{
    Node * DeleteNode = tail;
    tail = tail->prev;
    delete DeleteNode;
    if(tail==NULL) // jodi ektai node thake tokhon er jnno eta kaj krtese
    {
        head = NULL;
        return;
    }
    tail->next = NULL; //karon ekhon garbage ase

    // tail->prev->next = NULL;
    // Node * Delete_Node = tail;
    // tail = tail->prev;
    // delete Delete_Node;

}

int main()
{
    Node * head = new Node(10);
    // Node * a = new Node(20);
    // Node * b = new Node(30);
    // Node * c = new Node(40);
    Node *tail = head;

    //connection
    // head->next = a;
    // a->next = b;
    // a->prev = head;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    int pos;
    cin >> pos;

    if(pos>=size(head)) cout << "INVALID\n";
    else if(pos==0) delete_head(head,tail);
    else if(pos==size(head)-1) delete_tail(head,tail);
    else delete_at_position(head,pos);


    print_normally(head);
    print_reverse(tail);

    return 0;
}

*/
