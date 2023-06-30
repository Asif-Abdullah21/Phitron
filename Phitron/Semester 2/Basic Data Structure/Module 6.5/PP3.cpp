// Question: Take a singly linked list as input and print the middle element.
// If there are multiple values in the middle print both.

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

void Insert_value(Node *&head,int val)
{
    Node * new_node = new Node(val);
    if(head==NULL)
    {
        head = new_node;
        return;
    }

    Node * temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node; 
}

int node_size(Node *head)
{
    int cnt = 0;
    Node * temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void middle_node_odd(Node * head,int mid)
{
    Node * temp = head;
    int i=1;
    while (i != mid)
    {
        temp = temp->next;
        i++;
    }

    cout << temp->val << endl;
    
}

void middle_node_even(Node * head,int mid)
{
    Node * temp = head;
    int i=1;
    while (i != mid)
    {
        temp = temp->next;
        i++;
    }

    cout << temp->val;
    Node* temp2 = temp->next;
    cout << " " << temp2->val << endl;
    
}


int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if(val==-1) break;
        Insert_value(head,val);
    }
    int len =node_size(head);
    
    if(len%2 !=0)
    {
        int middle = (len+1)/2;
        middle_node_odd(head,middle);
    }
    else
    {
        int middle = len/2; //r (len/2) + 1 th value;
        middle_node_even(head,middle);
    }

    


     
    return 0;
}
















/*
Masud Abdullah:


// Question: Take a singly linked list as input and print the middle element.
// If there are multiple values in the middle print both.
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
        next = NULL;
    }
};
void Insert_at_Tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}
void Print_Linked_List(Node *&head,int size)
{
    Node *tmp = head;
    int ln=1;
    while (tmp != NULL)
    {
        if(size%2==0)
        {
            if(ln==size/2 || ln==(size/2)+1)
            {
                cout << tmp->val << " ";
            }
        }
        else
        {
            if(ln==(size/2)+1)
            {
                cout << tmp->val << " ";
            }
        }
        
        tmp = tmp->next;
        ln++;
    }
    cout << '\n';
}
int main()
{
    Node *head = NULL;
    int cnt = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        cnt++;
        Insert_at_Tail(head, val);
    }
    Print_Linked_List(head,cnt);

    return 0;
}

*/