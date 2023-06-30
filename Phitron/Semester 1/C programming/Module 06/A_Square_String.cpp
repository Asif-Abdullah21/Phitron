#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        int f = 0;
        string s;
        cin >> s;
        int j = s.size() / 2;

        if (s.size() % 2 != 0)
            cout << "NO\n";
        else
        {

            for (int i = 0; i < s.size() / 2; i++, j++)
            {
                if (s[i] != s[j])
                {
                    f = 1;
                    break;
                }
            }

            if (f == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}