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
    //trick 1: kono songkha ke oi songkha diye xor krle result 0 ashe
     //x^x=0;

    int n; cin >> n;

    int ans = 0;    //0 er sathe kono kisu xor krle kono change hoy na

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        ans = ans^x;
    }

    cout << ans << endl;
    
    


     
    return 0;
}
