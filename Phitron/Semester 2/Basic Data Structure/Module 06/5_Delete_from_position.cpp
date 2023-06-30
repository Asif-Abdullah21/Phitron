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

void Insert_At_Tail(Node * &head, int val) //reference dhore rakhtesi & chinno diye jate ekhane change kre main eu change hoye jay
{
    Node *New_Node = new Node(val);
    if (head == NULL)
    {
        head = New_Node;
        cout << "Inserted at head successfully\n";
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) //tail(orthat last node) er next a giye thamtese
    {
        temp = temp->next;
    }
    //temp ekhon last node a

    temp->next = New_Node; //tail er next a new node er address diye dilam r linked hoye gelo
    cout << "Inserted at tail successfully\n";
}

void Insert_At_Any_Pos(Node * head,int pos,int val) //head change krtesi na tai reference nei nai,tobe ami chaile safe thakar jonno reference nileu problem nai
{
    Node * new_node2 = new Node(val);

    Node * temp = head;
    for (int i = 1; i <= pos-1; i++) //position is assuming as index here//mane jei position dibe tar ag prjnto jabo
    {
        temp = temp->next;
    }

/* for (int i = 1; i <= pos-2; i++) //evabe dile position ke index dhora hocche na, pos 3 mane 3 number value
    {
        temp = temp->next;
    } */ 

    new_node2->next = temp->next;

    temp->next = new_node2;

    cout << endl << "\nInserted at position(assuming index) "<<pos << endl;
    
}

void Insert_At_Head(Node * &head,int val)
{
    Node * new_node = new Node(val);
    new_node->next = head;
    head = new_node;

    cout << "Inserted at head successfully\n";
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

void Delete_from_pos(Node *head, int pos)
{
    Node * temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }

    Node * delete_Node = temp->next;
    temp->next =  temp->next->next;
    delete delete_Node;
}


int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option- 1 : Insert at tail" << endl;
        cout << "Option- 2 : Insert at any position" << endl;
        cout << "Option- 3 : Insert at head" << endl;
        cout << "Option- 4 : Print the linked list" << endl;
        cout << "Option- 5 : Delete from position" << endl;
        cout << "Option- 6 : Terminate the program" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter new value: ";
            int val;
            cin >> val;
            Insert_At_Tail(head, val); //val = new value
            cout << endl;
        }

        else if (op == 2)
        {
            cout << "Enter the position and value: ";
            int pos,val;
            cin >> pos >> val; 
            if(pos==0) Insert_At_Head(head,val);
            else Insert_At_Any_Pos(head, pos,val); //val = new value
            cout << endl;
        }
        else if (op == 3)
        {
            cout << "Enter the value: ";
            int val;
            cin >> val; //0th position mane head a evabe deya jabe na
            Insert_At_Head(head,val); //val = new value
            cout << endl;
        }
        else if(op==4)
        {
            cout << "\nLinked List: ";
            Printing_Linked_list(head);
            cout << endl;
        }
        else if(op==5)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;

            Delete_from_pos(head,pos);
        }
        else if(op==6) break;
    }

    return 0;
}
