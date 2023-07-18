#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * left;
    Node * right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * get_input()
{
    int val;
    cin >> val;
    Node *root;
    if(val==-1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        Node *myLeft;
        Node *myRight;

        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        temp->left = myLeft;
        temp->right = myRight;

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }

    return root;
    
}

void display(Node *root)
{
    if(root==NULL) return;

    queue<Node *> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }

    cout << endl;

}

void input_bst(Node * &root,int x)
{
    if(root==NULL)
    {
        root = new Node(x);
        return;
    }

    if(x<root->val)
    {
        if(root->left==NULL) root->left = new Node(x);
        else input_bst(root->left,x);
    }

    else//else if(x<root->val) // dublicate value asbe na,else dileu pera nai tai,chill
    {
        if(root->right==NULL) root->right = new Node(x);
        else input_bst(root->right,x);
    }
}

int main()
{
    Node * root = get_input(); //20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1
    cout << "Before: "; display(root);//Before: 20 10 30 15 25 35
    
    input_bst(root,13);
    input_bst(root,32);
    input_bst(root,27);
    input_bst(root,22);

    cout << "After: "; display(root); //After: 20 10 30 15 25 35 13 22 27 32
    
    return 0;
}
