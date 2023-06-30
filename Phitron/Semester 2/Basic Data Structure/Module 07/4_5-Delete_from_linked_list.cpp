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

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_linked_list(Node *head,int pos)
{
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }

    Node * delete_temp = tmp->next;
    tmp->next = tmp->next->next; //tmp->next = delete_temp->next;
    delete delete_temp;
    
}

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

void delete_head(Node *&head)
{
    Node * Delete_Node = head;
    head = head->next;
    delete Delete_Node;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linekd_list(head);

    int pos;
    cin >> pos;

    if(pos>=size(head) || pos<0) cout << "Invalid Index\n";
    else if(pos==0) delete_head(head);
    else delete_linked_list(head,pos);

    print_linekd_list(head);

    return 0;
}