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

    int val; cin >> val;
    int ans=-1;

    int l=0,r=n-1;

    while (l<=r)
    {
        int mid = l+(r-l)/2; //same as (l+r)/2;

        if(a[mid]==val)
        {
            ans = mid;
            r = mid-1;
           // l = mid+1;
        }
        else if(val<a[mid]) r = mid-1;
        else l = mid+1;
    }
    

    if(ans==-1) cout << "Not found\n";
    else cout << "Found at index: "<<ans << endl;
    
     
    return 0;
}
