#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n+1],dp[n+1];

    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }
    
    dp[0] = 0;
    dp[1] = abs(a[2]-a[1]);

    for (int i = 3; i <=n; i++)
    {
        int choice1 = dp[i-2] + abs(dp[i]-dp[i-2]);
        int choice2 = dp[i-1] + abs(dp[i]-dp[i-1]);

        dp[i] = min(choice1,choice2);
    }

    cout << dp[n] << endl;
    
     
    return 0;
}
