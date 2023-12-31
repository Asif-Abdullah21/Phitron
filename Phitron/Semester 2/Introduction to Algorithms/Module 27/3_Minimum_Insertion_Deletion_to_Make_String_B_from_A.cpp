// Minimum Insertion _ Deletion to Make String B From A //

// Finding the size of the longest subsequence between two strings //

#include<bits/stdc++.h>
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

    int Delete = n - dp[n][m];     // D = size of A - LCS //  
    int Insert = m - dp[n][m];   // I = size of B - LCS //  


    cout << "Minimum number of Deletion: " << Delete << endl;
    cout << "Minimum number of Insertion: " << Insert << endl;
    
    return 0;
}