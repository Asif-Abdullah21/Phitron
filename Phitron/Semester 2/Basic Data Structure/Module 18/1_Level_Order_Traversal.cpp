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

void level_order_print(Node *root)
{
    queue<Node *> q;
    
    q.push(root);

    while (!q.empty())
    {
        Node *front1 = q.front();

        q.pop();
        
        cout << front1->val << " ";

        if(front1->left!=NULL) q.push(front1->left);  //if(front1->left) q.push(front1->left);//
        // same because null returns false value
        if(front1->right!=NULL) q.push(front1->right); //if(front1->right) q.push(front1->right);//

        // q.pop(); upre na diye ekhane dileu same kaj kre
    }
    

}

int main()
{
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    level_order_print(root);

    
     
    return 0;
}
