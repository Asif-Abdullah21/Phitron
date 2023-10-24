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
    int n; cin >>n;

    //Trick 5: removing/clear last set bit: n&(n-1) korle n er last bit zero hoye jay

    n = n&(n-1);

    // n jodi 2 er power hoy taile n&(n-1) krle 0 pabo

    cout << n << endl;
     
    return 0;
}
