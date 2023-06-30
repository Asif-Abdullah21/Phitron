#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
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
        int n;
        cin >> n;

        string s;
        cin >> s;
        int ans = 0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            int cnt = 0;
            for (int j = 0; j < sz(s); j++)
            {
                if (i == s[j]) cnt++;
            }
            if(cnt >0) ans += cnt+1;
        }

        cout << ans << endl;
    }

    return 0;
}
