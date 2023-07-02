#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;
    Node * prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
    public:
    Node *head = NULL;    
    Node *tail = NULL;  
    int sz = 0;  

    void push(int val)
    {
        sz++;
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;// tail = tail->next;
        
    }

    void pop()
    {
        sz--;
        Node * del = head;
        head = head->next;
        delete del;
        if(head==NULL)
        {
            tail = NULL;
            //delete del;
            return;
        }
        head->prev = NULL;
        //delete del;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};

int main()
{ 
    myQueue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " "; //10 20 30 40 50
        q.pop();
    }
    

    return 0;
}


/*
for single values:

int main()
{ 
    myQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << q.front() << " ";
    q.pop();
    
    cout << q.front() << " ";
    q.pop();
    
    cout << q.front() << endl; // front access er age ba pop korar age check kre nite hbe je queue ta empty ki na
    q.pop();
    // q.pop();abar dile Segmentation fault asbe jehetu r value nai

    return 0;
}



*/