// Question: Take a singly linked list as input and print the size of the linked list.


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
    while (true)
    {
        int val;
        cin >> val;

        if(val==-1) break;
        Insert_value(head,val);
    }
    
    cout << node_size(head) << endl;

     
    return 0;
}









// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int val;
//     Node * next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void Insert_value(Node *&head,int val)
// {
//     Node * new_node = new Node(val);
//     if(head==NULL)
//     {
//         head = new_node;
//         return;
//     }

//     Node * temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = new_node; 
// }

// void display(Node * head)
// {
//     Node * temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
    
// }


// int main()
// {
//     Node *head = NULL;
//     int cnt=0;
//     while (true)
//     {
//         int val;
//         cin >> val;

//         if(val==-1) break;
//         cnt++;
//         Insert_value(head,val);
//     }

//     display(head);
//     cout << "size: " << cnt << endl;

     
//     return 0;
// }
