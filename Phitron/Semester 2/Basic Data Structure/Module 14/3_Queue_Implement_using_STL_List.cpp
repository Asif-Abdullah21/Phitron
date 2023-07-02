#include <bits/stdc++.h>
using namespace std;


class myQueue
{
    public:
    list<int> myList;

    void push(int val)
    {
        myList.push_back(val); 
    }

    void pop()
    {
        myList.pop_front();
    }

    int front()
    {
        return myList.front();
    }

    int size()
    {
        return myList.size();
    }

    bool empty()
    {
        return myList.empty(); //true or false return krbe
        // if(myList.size()==0) return true;
        // else return false;
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

    if(!q.empty())
    {
        cout << q.front() << endl;
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