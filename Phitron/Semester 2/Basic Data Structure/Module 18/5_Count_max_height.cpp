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
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
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
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int maxHeight(Node *root)
{
    if(root==NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l,r)+1;// left subtree er max + right subtree er max + nijer height 1
}

int main()
{
    Node *root = input_tree(); //10 20 50 30 40 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1              /////////1 2 3 4 5 6 7 8 9 -1 -1 10 -1 11 12 -1 -1 13 -1 -1 14 -1 -1 -1 -1 -1 15 -1 -1 -1 -1
    cout << maxHeight(root) << endl; //4                                                        ///////// 6
    return 0;
}