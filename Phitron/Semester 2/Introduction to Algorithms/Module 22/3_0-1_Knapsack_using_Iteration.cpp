#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n+2], w[n+2];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    
    int capacity;
    cin >> capacity;

    int dp[n+2][capacity+2];

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j<=capacity; j++)
        {
            if(i==0 || j==0) dp[i][j] = 0;
        }
        
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=capacity; j++)
        {
            if(w[i-1]<=j)
            {
                // int op1 = dp[i-1][j-w[i-1]] + v[i-1];
                // int op2 = dp[i-1][j];

                dp[i][j] = max(dp[i-1][j-w[i-1]] + v[i-1],dp[i-1][j]); //dp state
            }
            else dp[i][j] = dp[i-1][j];
        }
        
    }


    for (int i = 0; i <=n; i++)    // Printing dp array //
    {
        for (int j = 0; j<=capacity; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
        
    }


        cout << "Maximum: " << dp[n][capacity] << endl;
    

    return 0;
}


