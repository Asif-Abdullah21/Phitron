#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        stack<char> st;
        string str;
        cin >> str;
        for(char ch:str)
        {
            if(st.empty()) st.push(ch);
            else{
                if(st.top()!=ch)
                {
                    st.pop();
                }
                else st.push(ch);
            }
        }

        if(st.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
     
    return 0;
}
