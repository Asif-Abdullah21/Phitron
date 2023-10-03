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
    int n;
    cin >> n;

    if(n==1) cout << 1;
    else{
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if(i==1) cout << j;
                else if(j==1) cout << i;
                else if(j==n) cout << n;
                else if(i==n) cout <<n;
                else cout << " ";
            }

            cout << endl;
            
        }
        
    }
     
    return 0;
}
