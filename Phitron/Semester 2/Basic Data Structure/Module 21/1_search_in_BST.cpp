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

bool bst_search(Node *root,int x)
{
    if(root==NULL) return false;
    if(root->val == x) return true;
    else if(x<root->val) 
    {
        return bst_search(root->left,x);
        // bool l = bst_search(root->left,x);
        // if(l==true) return true;
        // else return false;
    }
    else if(x>root->val) return bst_search(root->right,x);
}

int main()
{
    Node * root = get_input(); //10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
    display(root);//10 5 15 2 6 12 16 3
    int x = 6;

    if(bst_search(root,x)) cout << x << " -> Yes, Found!" << endl; //6 -> Yes, Found!
    else cout << x << " -> No, Not Found!\n";
    
    return 0;
}
