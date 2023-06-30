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
    ll a,b;
    cin >> a >> b;

    cout << a <<" + "<<b << " = " << a+b << endl; 
    cout << a <<" * "<<b << " = " << a*b << endl; 
    cout << a <<" - "<<b << " = " << a-b << endl; 
    return 0;
}


/*
previous code in c:

#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    printf("%lld + %lld = %lld\n",a,b,a+b);
    printf("%lld * %lld = %lld\n",a,b,a*b);
    printf("%lld - %lld = %lld\n",a,b,a-b);

    return 0;
}

*/