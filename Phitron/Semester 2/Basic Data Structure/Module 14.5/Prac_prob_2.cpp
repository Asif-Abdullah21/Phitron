#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.push(x);
    }
    
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        q.push(x);
    }
    
    if(st.size()!=q.size()) cout << "NO\n";
    else{
        bool flag = true;
        while (!st.empty())
        {
            //cout << st.top() << " " << q.front() << endl;
            if(st.top() !=q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    }
     
    return 0;
}
