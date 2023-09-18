#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

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

    bool dp[n+1][s+1];

    dp[0][0] = true;

    for (int i = 1; i <=s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=s; j++)
        {
            if(a[i-1]<=j)
            {
                // bool op1 = dp[i-1][j-a[i-1]];       // nibo //
                // bool op2 = dp[i-1][j];              // nibo na //
                // dp[i][j] = op1 || op2;

                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
        
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(dp[i][j]) cout << "T ";
            else cout << "F ";
        }
        cout << endl;
    }
    
    if(dp[n][s]) cout << "YES" << endl;
    else cout << "NO" << endl;

    

    

    return 0;
}
