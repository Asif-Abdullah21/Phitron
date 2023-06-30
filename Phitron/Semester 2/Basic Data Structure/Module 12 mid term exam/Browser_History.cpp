#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string s;
    Node *next;
    Node *prev;

    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string s)
{
    Node *NewNode = new Node(s);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    NewNode->prev = tail;
    tail->next = NewNode;
    tail = NewNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string str;
        cin >> str;

        if (str == "end") break;
        insert_tail(head, tail, str);
    }

    int t;
    cin >> t;

    Node *temp = head;

    while (t--)
    {
        string str;
        cin >> str;
        if(str=="visit")
        {
            string str1;
            cin >> str1;
            int f=0;
            Node * temp2 = head;
            head = temp;

            while (head !=NULL)
            {
                if(head->s==str1)
                {
                    f=1;
                    break;
                }
                else head = head->next;
            }
            if(f==1) cout << head->s << endl;
            else{
                cout << "Not Available\n";
                head = temp2;
            }
        }
        else if(str=="prev")
        {
            if(head->prev==NULL) cout << "Not Available\n";
            else{
                 cout << head->prev->s << endl;
                 head = head->prev;
            }
        }
        else if(str=="next")
        {
            if(head->next==NULL) cout << "Not Available\n";
            else{
                 cout << head->next->s << endl;
                 head = head->next;
            }
        }
    }
    

    // print_normal(head);
    // print_reverse(tail);

    return 0;
}
