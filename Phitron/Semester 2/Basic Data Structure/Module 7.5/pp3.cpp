#include<bits/stdc++.h>
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

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node * new_node = new Node(val);
    if(head==NULL)
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

void odd_mid(Node *head,int mid)
{
    Node *temp = head;
    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << endl;
    
}

void even_mid(Node *head,int mid)
{
    Node *temp = head;
    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << " " <<temp->next->val << endl;
    
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

    int len = size(head);
    if(len%2!=0)
    {
        int mid = (len+1)/2;
        odd_mid(head,mid);
    }
    else{
        int mid = len/2;
        even_mid(head,mid);
    }
    

    return 0;
}









// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_tail(Node *&head,Node *&tail,int val)
// {
//     Node *new_node = new Node(val);
//     if (head == NULL)
//     {
//         head = new_node;
//         tail = new_node;
//         return;
//     }

//     tail->next = new_node;
//     tail = new_node;
// }

// int size(Node *head)
// {
//     int cnt =0;
//     while (head != NULL)
//     {
//         head = head->next;
//         cnt++;
//     }
//     return cnt;
// }

// void display(Node *head,int len)
// {
//     Node *temp = head;
//     int cnt=1;
//     while (temp != NULL)
//     {
//         if(len%2==0)
//         {
//             if(cnt==len/2) cout << temp->val << " ";
//             if(cnt==(len/2)+1) cout << temp->val << endl;
//         }
//         else{
//             if(cnt==(len+1)/2) cout << temp->val << endl;
//         }

//        // cout << temp->val << " ";
//         temp = temp->next;
//         cnt++;
//     }
// }

// int main()
// {
//     Node * head = NULL;
//     Node * tail = NULL;
//     while (true)
//     {
//         int val;
//         cin >> val;

//         if(val == -1) break;

//         insert_tail(head,tail,val);
//     }

//     display(head,size(head));

//     return 0;
// }