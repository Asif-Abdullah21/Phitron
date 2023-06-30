#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};


void Insert_At_Tail(Node * &head, int val) //reference dhore rakhtesi & chinno diye jate ekhane change kre main eu change hoye jay
{
    Node *New_Node = new Node(val);
    if (head == NULL)
    {
        head = New_Node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) //tail(orthat last node) er next a giye thamtese
    {
        temp = temp->next;
    }
    //temp ekhon last node a

    temp->next = New_Node; //tail er next a new node er address diye dilam r linked hoye gelo
 
}

void Printing_Linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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

    Printing_Linked_list(head);
    
    return 0;
}