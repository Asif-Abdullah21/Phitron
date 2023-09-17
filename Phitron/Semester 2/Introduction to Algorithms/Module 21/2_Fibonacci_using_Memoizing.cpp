#include <bits/stdc++.h>
#define  ll  long long
using namespace std;

const int N = 1e5+5;
ll save[N];

ll fibo(ll n)
{
    if(n==1 || n==0) return 1;

     // Memoization // //complexity is O(N)

    if(save[n]!=-1) return save[n];

    ll ans1 = fibo(n-1);
    ll ans2 = fibo(n-2);

    save[n] = ans1+ans2;

    return save[n];
}

int main()
{
    ll n;
    cin >> n;

    for (int i = 0; i <=n; i++)
    {
        save[i] = -1;
    }

    cout << fibo(n) << endl;
     
    return 0;
}
