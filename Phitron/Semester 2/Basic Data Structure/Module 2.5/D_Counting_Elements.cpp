#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt=0;

    for (int i = 0; i < n; i++)
    {
       // vector<int>:: iterator it;
        auto it = find(v.begin(),v.end(),v[i]+1); 

        if(it != v.end()) cnt++;
        // if(*it == v[i]+1) cnt++;
    }  
    
    // O(n*n)

    cout << cnt << endl;
    
    
     
    return 0;
}








//in c:


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     int cnt=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(a[j]==a[i]+1)
//             {
//                 cnt++;
//                 break;
//             }
//         }
        
//     }

//     printf("%d\n",cnt);
    
    
    
//     return 0;
// }