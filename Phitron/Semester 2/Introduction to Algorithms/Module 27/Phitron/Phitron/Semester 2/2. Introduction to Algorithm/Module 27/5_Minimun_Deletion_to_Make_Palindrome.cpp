#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    b = a;
    reverse(b.begin(), b.end());

    int n = a.size();
    int m = b.size();
    int i, j;

    int dp[n + 1][m + 1];

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {

            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Minimum Number of Deletion to make Palindrome: " << n - dp[n][m] << endl; //size-lpc

    return 0;
}









/*

//MUHAMMAD SAYEM:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    b = a;
    reverse(b.begin(), b.end());

    int n = a.size();
    int m = b.size();
    int i, j;

    int dp[n+1][m+1];

    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){

            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    i = n;
    j = m;

    string ans;

    while(i != 0 && j != 0){
        if(a[i-1] == b[j-1]){
            ans += a[i-1];
            i--;
            j--;
        }

        else{
            if(dp[i][j-1] > dp[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    
    cout << "Minimum Number of Deletion to make Palindrome: "<< a.size() - ans.size() << endl;
    
    return 0;
}





*/