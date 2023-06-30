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
void print_recursion(Node *n)
{
    // base case
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursion(n->next);
}

void print_reverse(Node *n)
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->val << " ";
}

void reverse(Node *&head,Node *current_node)
{
    if(current_node->next==NULL)
    {
        head = current_node;
        return;
    }
    reverse(head,current_node->next);

    current_node->next->next = current_node;
    current_node->next = NULL;
}


void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
 
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;


    reverse(head,head);
    print(head);
    
    return 0;
    
}