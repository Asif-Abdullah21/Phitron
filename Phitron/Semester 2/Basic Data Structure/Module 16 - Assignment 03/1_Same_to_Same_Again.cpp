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

class myStack{
    public:

    Node * head = NULL;
    Node * tail = NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    } 

    void pop()
    {
        sz--;
        Node * del = tail;
        tail = tail->prev;
        if(tail==NULL) head = NULL;
        else tail->next = NULL;
        delete del;
    }

    int top()
    {
        return tail->val;
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

class myQueue{
    public:

    Node * head = NULL;
    Node * tail = NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    } 

    void pop()
    {
        sz--;
        Node * del = head;
        head = head->next;
        if(head==NULL) tail = NULL;
        else head->prev = NULL;
        delete del;
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

void insert_tail(Node *&head,Node *&tail,int val)
{
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
}

void display(Node *head)
{
    while (head !=NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
    
}

int size(Node *head)
{
    int cnt=0;
    while (head !=NULL)
    {
        cnt++;
        head = head->next;
    }

    return cnt;
    
}

int main()
{
    myStack st;
    myQueue q;

    int n,m;
    cin >> n >> m;

    for (int  i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.push(x);
    }
    
    for (int  i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        q.push(x);
    }

    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (!st.empty())
    {
        insert_tail(head1,tail1,st.top());
        st.pop();
    }

    
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (!q.empty())
    {
        insert_tail(head2,tail2,q.front());
        q.pop();
    }
    
  //  display(head1);
   // display(head2);

    if(size(head1)!=size(head2)) cout << "NO\n";
    else{
        Node * temp1 = head1;
        Node * temp2 = head2;
        bool flag = true;
        while (temp1!=NULL)
        {
            if(temp1->val !=temp2->val)
            {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    }

    
     
    return 0;
}
