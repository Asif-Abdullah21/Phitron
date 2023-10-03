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
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k; cin >> k;

    ll mx = INT_MIN; 

    for (int i = 0; i < n-k+1; i++)
    {
        ll sum =0;
        for (int j = i; j < i+k; j++)
        {
        //    cout << j << " ";
            sum += a[j];
        }
       // cout << endl;
        mx = max(sum,mx);
        
    }

    cout << mx << endl;
    
    
     
    return 0;
}
