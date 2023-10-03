#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n+3];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if(s>sum || (sum + s)%2!=0)
        {
             cout << 0 << endl;
             continue;
        }

        s = (sum + s) / 2;

       

        int dp[n + 1][s + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = 0;
            }
        }

        dp[0][0] = 1;
      
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;  
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            { 
                if (a[i - 1]<=j)
                {
                    dp[i][j] += (dp[i - 1][j - a[i - 1]]+dp[i - 1][j]);
                }
                else dp[i][j] = dp[i-1][j];

                dp[i][j] = dp[i][j]%mod;
            }
        }

        cout << dp[n][s] << endl;
    }

    return 0;
}
