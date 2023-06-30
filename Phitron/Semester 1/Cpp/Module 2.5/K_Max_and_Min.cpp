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
    int a,b,c;
    cin >> a >> b >> c;

    cout << min({a,b,c}) << ' ' << max({a,b,c}); 
    return 0;
}


//without function:

// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define sort(a) sort(a,a+n)
// #define rev(a) reverse(a,a+n)
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int a,b,c,mn,mx;
//     cin >> a >> b >> c;

//     if(a<b && a<c) mn=a;
//     else if(b<c) mn = b;
//     else mn = c; 

//     if(a>b && a>c) mx=a;
//     else if(b>c) mx = b;
//     else mx = c; 

//     cout << mn << " "<< mx << endl;
//     return 0;
// }
