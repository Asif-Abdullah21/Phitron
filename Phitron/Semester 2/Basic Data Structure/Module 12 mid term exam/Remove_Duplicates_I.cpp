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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *NewNode = new Node(val);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    tail->next = NewNode;
    tail = NewNode;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << endl;
}

void delete_dublicate(Node *&head)
{
    if(head==NULL || head->next == NULL) return;

    Node *temp = head;

    while (temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            Node *del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        if(temp->next==NULL) return;
        else if(temp->val != temp->next->val) temp = temp->next;
    }
     
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1) break;
        insert_tail(head, tail, val);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val>j->val) swap(i->val,j->val);
        }
    }

    delete_dublicate(head);

    print(head);

    return 0;
}
