/*
// Question: Take a singly linked list as input, then take q queries.
// In each query you will be given an index and value. You need to insert
// those values in the given index and print the linked list.
// If the index is invalid print “Invalid”.
// */


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

void display(Node * head)
{
    Node * temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

void Insert_At_Tail(Node *&head,int val)
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

void Insert_At_Head(Node *&head,int v)
{
    Node * new_node = new Node(v);
    new_node->next = head;
    head = new_node;
}

void Insert_At_Any(Node *&head,int i,int v)
{
    Node * new_node = new Node(v);

    if(i==0)
    {
        Insert_At_Head(head,v);
        return;
    }

    Node * temp = head;
    
    int j=1;
    while (j != i) // tar mane i er ag prjnto cholbe j==i hole cholbe na
    {
        temp = temp->next;
        // if(temp==NULL)
        // {
        //     cout << "Invalid\n";
        //     return;
        // }
        j++;
    }

    new_node->next = temp->next;
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
    Node * head = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if(val==-1) break;
        Insert_At_Tail(head,val);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int index,val;
        cin >> index >> val;
        if(index>=0 && index<=node_size(head))
        {
            Insert_At_Any(head,index,val);
            display(head);
        }
        else cout << "Invalid\n";
    }
    
    
    return 0;
}












// /*
// Question: Take a singly linked list as input, then take q queries.
// In each query you will be given an index and value. You need to insert
// those values in the given index and print the linked list.
// If the index is invalid print “Invalid”.
// */


// #include<bits/stdc++.h>
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

// void Insert_At_Tail(Node *&head,int val)
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

// void Insert_At_Head(Node *&head,int v)
// {
//     Node * new_node = new Node(v);
//     new_node->next = head;
//     head = new_node;
//     display(head);
// }

// void Insert_At_Any(Node *&head,int i,int v)
// {
//     Node * new_node = new Node(v);

//     if(i==0)
//     {
//         Insert_At_Head(head,v);
//         return;
//     }

//     Node * temp = head;
    
//     int j=1;
//     while (j != i) // tar mane i er ag prjnto cholbe j==i hole cholbe na
//     {
//         temp = temp->next;
//         if(temp==NULL)
//         {
//             cout << "Invalid\n";
//             return;
//         }
//         j++;
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;
//     display(head);
    
// }



// int main()
// {
//     Node * head = NULL;

//     while (true)
//     {
//         int val;
//         cin >> val;

//         if(val==-1) break;
//         Insert_At_Tail(head,val);
//     }

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int index,val;
//         cin >> index >> val;

//         Insert_At_Any(head,index,val);
//     }
    
    
//     return 0;
// }
