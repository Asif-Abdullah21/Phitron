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
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val; cin >> val;

    auto it1 = upper_bound(v.begin(),v.end(),val); 

    int indxU = it1-v.begin(); 

    auto it2 = lower_bound(v.begin(),v.end(),val); 

    int indxL = it2-v.begin(); 

    cout << indxU - indxL << endl; // value tar frequency paua jabe //logn a peye jacchi
    


     
    return 0;
}



