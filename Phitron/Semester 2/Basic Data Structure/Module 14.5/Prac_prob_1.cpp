#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st1.push(x);
    }
    
    stack<int> st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        st2.push(x);
    }

    if(st1.size()!=st2.size()) cout << "NO\n";
    else{
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(st1.top()!=st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    }
    
     
    return 0;
}
