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

        int e=0,o=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x%2==0) e++;
            else o++;
        }

        if(n%2!=0) cout << -1 << endl;
        else cout << (n/2)-min(e,o) << endl;
        
    }
     
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int n;   
//         scanf("%d", &n);
//         int a[n+1];
    
//         int even = 0, odd = 0;
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &a[i]);
//             if(a[i]%2==0) even++;
//             else odd++;
//         }

//         int ans = abs(even-odd);

                    
//         if(n%2!=0) printf("-1\n");
//         else printf("%d\n",ans/2);
//     }

//     return 0;
// }