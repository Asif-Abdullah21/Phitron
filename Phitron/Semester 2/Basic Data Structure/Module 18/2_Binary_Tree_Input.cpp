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


Node * input_tree()
{
    int val;
    cin >> val;

    Node * root;

    if(val==-1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if(root!=NULL) q.push(root);//if(root) q.push(root);

    while (!q.empty())
    {
        //1.ber kore ana//
        Node * parent = q.front();
        q.pop();

        //2.jabotiyo kaj ekhane//
        int val1,val2;
        cin >> val1 >> val2;

        if(val1!=-1) parent->left = new Node(val1);
        if(val2!=-1) parent->right = new Node(val1);

        //3. tar children gulo k rakha//

        if(parent->left!=NULL) q.push(parent->left);
        if(parent->right!=NULL) q.push(parent->right);
    }
    
    return root;
}


int main()
{
    Node * root = root;
    input_tree();
    
      
     
    return 0;
}
