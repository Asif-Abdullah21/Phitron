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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = INT_MAX;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                mn = min((a[i]+a[j]+j-i),mn);
            }
            
        }

        cout << mn << endl;
        
        
    }
     
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,j,k;
    cin >> t;

    while(t--)
    {
        long long n,mini=1e18,ans=0;
        cin >> n;
        long long a[n+1];
        for(k=1;k<=n;k++) cin >> a[k];

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                ans = a[i]+a[j]+j-i;

                if(ans<=mini) mini = ans;
            }
        }
       cout << mini << endl;

    }

    return 0;
}

*/