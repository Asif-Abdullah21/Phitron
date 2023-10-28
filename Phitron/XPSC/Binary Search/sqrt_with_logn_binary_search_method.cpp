#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define no (cout << "No\n")
#define yes (cout << "Yes\n")
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

bool AreSame(double val,double n)
{
    return fabs(val-n)<1e-15;
    //  if(fabs(val-n)<1e-15) return true;
    // else return false;
}

int main()
{
    FIO;
    double n; cin >> n;
    double l = 0.0;
    double r = n;

    while ((r-l)>=1e-15)
    {
        double mid = l+(r-l)/2;

        double val = mid*mid;

        if(AreSame(val,n))
        {
            cout <<"Square root: "<< mid << endl;
            break;
        }
        else if(val>n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    
    
     
    return 0;
}
