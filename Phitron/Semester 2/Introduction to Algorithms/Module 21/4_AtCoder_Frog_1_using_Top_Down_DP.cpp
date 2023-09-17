#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;
int dp[N];

int solve(int a[],int n)
{
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    else if(n==2)
    {
        dp[n] = abs(a[2]-a[1]);
        return dp[n];
    }

    // else if(n==2) //uporer tar shortcut
    // {
    //     return dp[n] = abs(a[2]-a[1]); 
    // } 


    else{
        int choice1 = solve(a,n-1)+abs(a[n]-a[n-1]);
        int choice2 = solve(a,n-2)+abs(a[n]-a[n-2]);

        dp[n] = min(choice1,choice2);

        return dp[n];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n+2];

    for (int i = 1; i <=n; i++)
    {
        dp[i] = -1;
        cin >> a[i];
    }

    cout << solve(a,n) << endl;
    
     
    return 0;
}
