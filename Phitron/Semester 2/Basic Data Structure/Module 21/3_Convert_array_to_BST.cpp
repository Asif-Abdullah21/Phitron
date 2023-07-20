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

Node * convert(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(a[mid]);

    Node *leftRoot = convert(a,n,l,mid-1);
    Node *rightRoot = convert(a,n,mid+1,r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{
    int n;
    cin>> n; //6

    int a[n];
    for (int i = 0; i < n; i++) //2 5 8 12 15 18
    {
        cin >> a[i];
    }

    // sort(a,a+n);// sort kora na thakle array sort kre nite hbe

    Node *root = convert(a,n,0,n-1);
    display(root); //8 2 15 5 12 18
    
    return 0;
}
