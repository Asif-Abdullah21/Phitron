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

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void print_reverse(Node *head)
{
    Node *temp = head;
    if(temp == NULL) return;

    print_reverse(temp->next);

    cout << temp->val << " ";
   
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

    print_reverse(head);

    return 0;
}