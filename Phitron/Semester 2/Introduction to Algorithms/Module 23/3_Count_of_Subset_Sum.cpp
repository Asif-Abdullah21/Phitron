#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;

    int dp[n+1][s+1];

    dp[0][0] = 1;

    for (int i = 1; i <=s; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=s; j++)
        {
            if(a[i-1]<=j)
            {
                // int op1 = dp[i-1][j-a[i-1]];       // nibo //
                // int op2 = dp[i-1][j];              // nibo na //
                // dp[i][j] = op1 + op2;

                dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
        
    }

    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=s; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    cout << dp[n][s] << endl; // jemon 4 ta nile 7 banano possible 2 bar

    

    return 0;
}




/*
// Top Down //

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int subsetSum(int n, int a[], int sum)
{
    if(n==0)
    {
        if(sum==0) return 1;
        else return 0;
    }

    if(dp[n][sum] != -1) return dp[n][sum];

    if (a[n - 1] <= sum)
    {
        int op1 = subsetSum(n - 1, a, sum - a[n - 1]); // nibo //
        int op2 = subsetSum(n - 1, a, sum);               // nibo na //

        return dp[n][sum] = op1 + op2;  // jekono ekta true hoilei true return kore, shob false hoilei false return kore //
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

    cout << subsetSum(n, a, sum) << endl;

    return 0;
}


*/