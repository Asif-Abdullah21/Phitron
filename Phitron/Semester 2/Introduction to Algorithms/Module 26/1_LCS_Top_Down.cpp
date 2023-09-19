#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int lcs(string s1,int n,string s2,int m)
{
    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(s1[n-1]==s2[n-1])
    {
        // int ans = lcs(s1,n-1,s2,m-1);
        // return ans + 1;
        
        return dp[n][m] = lcs(s1,n-1,s2,m-1)+1;   
    }
    else{
        int ans1 = lcs(s1,n-1,s2,m);
        int ans2 = lcs(s2,n,s2,m-1);

        return dp[n][m] = max(ans1,ans2);
    }
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    memset(dp,-1,sizeof(dp));

    cout << "Length of maximum subsequence: " << lcs(s1, n, s2, m) << endl;
     
    return 0;
}
