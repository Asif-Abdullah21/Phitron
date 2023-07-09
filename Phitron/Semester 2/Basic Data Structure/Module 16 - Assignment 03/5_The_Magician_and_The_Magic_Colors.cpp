#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        stack<char> st;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if(st.empty()) st.push(ch);
            else{
                if(ch=='G' && st.top()=='R')
                {
                    st.pop();
                    if(st.empty()) st.push('Y');
                    else if(st.top()=='Y') st.pop();
                    else st.push('Y');
                }
                else if(ch=='R' && st.top()=='G')
                {
                    st.pop();
                    if(st.empty()) st.push('Y');
                    else if(st.top()=='Y') st.pop();
                    else st.push('Y');
                }

                else if(ch=='B' && st.top()=='G')
                {
                    st.pop();
                    if(st.empty()) st.push('C');
                    else if(st.top()=='C') st.pop();
                    else st.push('C');
                }
                else if(ch=='G' && st.top()=='B')
                {
                    st.pop();
                    if(st.empty()) st.push('C');
                    else if(st.top()=='C') st.pop();
                    else st.push('C');
                }
                else if(ch=='B' && st.top()=='R')
                {
                    st.pop();
                    if(st.empty()) st.push('P');
                    else if(st.top()=='P') st.pop();
                    else st.push('P');
                }
                else if(ch=='R' && st.top()=='B')
                {
                    st.pop();
                    if(st.empty()) st.push('P');
                    else if(st.top()=='P') st.pop();
                    else st.push('P');
                }
                else{
                    if(st.top()==ch) st.pop();
                    else st.push(ch);
                }
            }
        }

        stack<char> newSt;
        
        while (!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        
        while (!newSt.empty())
        {
            cout << newSt.top();
            newSt.pop();
        }
        
        cout << endl;
    }
     
    return 0;
}
