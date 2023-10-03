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
    string s1,s2;

    while (cin >> s1 >> s2)
    {
        int ans =0;
        int x=0;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]==s2[x])
            {
                ans++;
                x++;
            }
            if(ans==s2.size()) break;
        }

        if(ans==s2.size()) cout << "Possible\n";
        else cout << "Impossible\n";
        
    }
     
    return 0;
}
