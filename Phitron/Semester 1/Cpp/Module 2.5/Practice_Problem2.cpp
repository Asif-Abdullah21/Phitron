#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a,a+n)
#define rev(a) reverse(a,a+n)
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
    int n;
    cin >> n;

    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    int b[m];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    delete[] a; // a array is deleted now, we can't access the values of a array any more

    for (int i = n; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << ' ';
    }
    
    
    
    
    return 0;
}
