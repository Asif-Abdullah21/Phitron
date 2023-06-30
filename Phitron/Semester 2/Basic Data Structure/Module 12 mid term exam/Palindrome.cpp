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

void reverse(Node *&head,Node *temp)
{
    if(temp->next==NULL)
    {
        head = temp;
        return;
    }
    reverse(head,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1) break;
        insert_tail(head1, tail1, val);
        insert_tail(head2, tail2, val);
    }

    reverse(head2,head2);

    bool flag = true;

    Node * temp1 = head1;
    Node * temp2 = head2;

    while (temp1 != NULL)
    {
        if(temp1->val!=temp2->val)
        {
            flag = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
