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

int knapsack(int n, int capacity, int v[], int w[])
{
     // Base Case //
     if(n==0 || capacity==0) return 0;

    if (w[n-1] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n-1], v, w) + v[n-1]; // nibo, ar nile oi value ta plus korte hoy //
        int op2 = knapsack(n - 1, capacity, v, w);                       // nibo na //

        return max(op1, op2);
    }
    else return knapsack(n-1,capacity,v,w);
}


int main()
{
    FIO;
    int n,s;
    cin >> n >> s;
    int w[n+3],v[n+3];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    cout << knapsack(n,s,v,w);
    
     
    return 0;
}
