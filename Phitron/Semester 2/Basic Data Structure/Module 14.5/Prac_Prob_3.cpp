#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.push(x);
    }

    stack<int> newSt;

    while (!st.empty())
    {
        newSt.push(st.top());
        //cout << st.top()<< " ";
        st.pop();
    }
    //cout << endl;
    while (!newSt.empty())
    {
        cout <<  newSt.top() << " ";  //10 20 30 40 50
        newSt.pop();
    }

    return 0;
}
