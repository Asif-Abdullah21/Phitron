#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_list(Node * &head,Node *&tail,int val)
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

int size(Node *head)
{
    int cnt=0;
    Node * temp = head;

    while (temp != NULL)
    {
        cnt++;
        
        temp = temp->next;
    }
    return cnt;
    
}

void check(Node *head1,Node *head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int f=1;
    while (temp1 != NULL)
    {
        if(temp1->val != temp2->val)
        {
            f=0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(f) cout << "YES\n";
    else cout << "NO\n";
    
}



int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    while (true)
    {
        int val;
        cin>> val;
        if(val == -1) break;
        else insert_list(head1,tail1,val);
    }
    while (true)
    {
        int val;
        cin>> val;
        if(val == -1) break;
        else insert_list(head2,tail2,val);
    }

    if(size(head1) != size(head2)) cout << "NO\n";
    else check(head1,head2);

    
     
    return 0;
}
