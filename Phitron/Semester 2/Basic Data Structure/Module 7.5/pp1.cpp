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

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int size(Node *head)
{
    int cnt =0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if(val == -1) break;

        insert_tail(head1,tail1,val);
    }

    Node * head2 = NULL;
    Node * tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if(val == -1) break;

        insert_tail(head2,tail2,val);
    }

    if(size(head1)==size(head2)) cout << "Yes\n";
    else cout << "NO\n";
    

    return 0;
}