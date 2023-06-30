#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_back();
    } 
    int top()
    {
        return myList.back();
    }
    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        if(myList.size()==0) return true;
        else return false;
    }

};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
 
    while (!st.empty()) //while (st.empty()==false) //same
    {
        cout << st.top() << " ";        // 50 40 30 20 10 //
        st.pop();
    }
     
    return 0;
}
