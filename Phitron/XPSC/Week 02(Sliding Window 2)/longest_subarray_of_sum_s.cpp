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

    int s; cin >> s;

    int i=0,j=0,mx=0,sum=0;

    while (j<n)
    {
        sum += a[j];

        while(sum>s)
        {
            sum -= a[i];
            i++;
        }

       // if(sum==s) cout << j-i+1 << " ";
        if(sum==s) mx = max(mx,j-i+1);

        j++;
    }

    cout <<"Max size subarray of sum s is: " << mx << endl;
    
    
     
    return 0;
}
