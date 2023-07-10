#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)root = NULL;
    else root = new Node(val);

    queue<Node *> q;

    if (root) q.push(root); //     if (root!=NULL) q.push(root);
    
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front(); //p = parent
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)    q.push(p->left); //   same as ->  if (p->left!=NULL)    q.push(p->left);
        if (p->right)  q.push(p->right); // cz null false return kre
    }
    return root;
}

int count_leaf(Node *root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;// left right dui dikei null mane leaf node
    else{ //baki node gula//parent r ki
        int left_leaf = count_leaf(root->left);
        int right_leaf = count_leaf(root->right);
        return left_leaf+right_leaf;
    }
}

int main()
{
    Node *root = input_tree();
    cout << count_leaf(root);
    
    return 0;
}
