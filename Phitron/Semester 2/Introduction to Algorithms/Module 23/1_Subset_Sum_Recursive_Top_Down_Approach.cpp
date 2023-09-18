#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool subsetSum(int n, int a[], int sum)
{
    if(n==0)
    {
        if(sum==0) return true;
        else return false;
    }

    if(dp[n][sum] != -1) return dp[n][sum];

    if (a[n - 1] <= sum)
    {
        bool op1 = subsetSum(n - 1, a, sum - a[n - 1]); // nibo //
        bool op2 = subsetSum(n - 1, a, sum);               // nibo na //

        return dp[n][sum] = op1 || op2;  // jekono ekta true hoilei true return kore, shob false hoilei false return kore //
    }
    else return dp[n][sum] = subsetSum(n - 1, a, sum);
}

int main()
{
    int n;
    cin >> n;

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum;
    cin >> sum;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            dp[i][j] = -1;
        }
    }

    if (subsetSum(n, a, sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
