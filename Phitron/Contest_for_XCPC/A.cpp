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
        int n;
        cin >> n;

        int a[n+1];

        vector<pair<int,int>> v;
        

        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
           v.push_back({a[i],i});


        }

        sort(v.begin(),v.end(),greater<pair<int,int>>());


        int f=0;
        
        for (int i = 0; i < n; i++)
        {
           if(a[i]==v[0].first)
           {
               f=1;
               break;
           }
           else if(a[i]==v[1].first)
           {
               f=2;
               break;
           }
        }

    
        
        if(f==1) cout << v[0].second << " " << v[1].second << endl;
        else if(f==2) cout << v[1].second << " " << v[0].second << endl;
        
    }
     
    return 0;
}
