// Finding the string of the longest subsequence between two strings //

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int n = a.size();
    int m = b.size();
    int i, j;

    int dp[n + 2][m + 2];

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    // for(i=0; i<=n; i++){
    //     for(j=0; j<=m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    string ans;

    i=n;
    j=m;

    while (i!=0 && j!=0)
    {
        if(a[i-1]==b[j-1])
        {
            ans += a[i-1];
            i--;
            j--;
        }
        else
        {
            if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
    }
    

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}