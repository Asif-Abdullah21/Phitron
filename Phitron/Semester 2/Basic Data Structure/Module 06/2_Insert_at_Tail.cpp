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
    Node *head = NULL;

    while (true)
    {
        cout << "Option- 1 : Insert at tail" << endl;
        cout << "Option- 2 : Print the linked list" << endl;
        cout << "Option- 3 : Terminate the program" << endl;
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
        else if(op==2)
        {
            cout << "\nLinked List: ";
            Printing_Linked_list(head);
            cout << endl;
        }
        else if(op==3) break;
    }

    return 0;
}
