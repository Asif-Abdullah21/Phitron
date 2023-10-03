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
    int t;
    cin >> t;

    while (t--)
    {
        int zara = 0,kara =0;
        string s;
        cin >> s; 

        vector<int> v;

        int cnt=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1') cnt++;
            else{
                if(cnt) v.push_back(cnt);
                cnt=0;
            }
        }

        if(cnt) v.push_back(cnt);
        

        sort(v.begin(),v.end(),greater<int>());

        for (int i = 0; i < v.size(); i++)
        {
            // cout << v[i] << " ";
            if(i%2==0) zara+= v[i];
            // else kara+=v[i];
        }


        if(v.empty()) cout <<0 << endl;
        else cout << zara << endl;
        
        
    }
     
    return 0;
}
