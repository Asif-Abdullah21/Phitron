#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1(n); 

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int m;
    cin >> m;

    vector<int> v2(m); 

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int pos;
    cin >> pos;

    v1.insert(v1.begin()+pos,v2.begin(),v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<" ";
    }
    
    
    return 0;
}









// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int n,x;
//     cin >> n;

//     vector<int> v1; 

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         v1.push_back(x);
//     }

//     int m;
//     cin >> m;

//     vector<int> v2; 

//     for (int i = 0; i < m; i++)
//     {
//         cin >> x;
//         v2.push_back(x);
//     }

//     int pos;
//     cin >> pos;

//     v1.insert(v1.begin()+pos,v2.begin(),v2.end());

//     for (auto i = v1.begin(); i < v1.end(); i++)
//     {
//         cout << *i <<" ";
//     }
    
    
//     return 0;
// }
