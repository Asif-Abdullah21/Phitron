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

    auto it = upper_bound(v.begin(),v.end(),val); //first greater then(<) val er adress ferot dibe//

    cout << "Value :"<< *it << endl;

    int indx = it-v.begin(); // jei adress pabo oi adress theke shurur adress ta baad dile index ta paua jay

    cout <<"Index: "<< indx << endl; //invalid index dile bujha jabe er soman o nai boro o nai


     
    return 0;
}



