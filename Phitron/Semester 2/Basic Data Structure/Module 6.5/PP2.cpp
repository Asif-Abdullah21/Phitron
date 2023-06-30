//Question: Take a singly linked list as input and check if the linked list contains any duplicate value. 
//You can assume that the maximum value will be 100.


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


int main()
{
    Node *head = NULL;
    int a[101] ={0};
    while (true)
    {
        int val;
        cin >> val;
        if(val==-1) break;


        a[val]++;
        Insert_value(head,val);
    }
    
    int f=0;

    for (int i = 0; i < 101; i++)
    {
        if(a[i]>1)
        {
            f=1;
            break;
        }
    }
    
    if(f) cout << "YES\n";
    else cout << "NO\n";

     
    return 0;
}

