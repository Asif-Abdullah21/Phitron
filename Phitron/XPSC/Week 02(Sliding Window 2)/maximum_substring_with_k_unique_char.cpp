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

    string s; cin >> s;
    int k; cin >> k;

    int n = s.size();

    int i=0,j=0;

    int freq[26]={0};
    int unique=0;

    while (j<n)
    {
        freq[s[j]-'a']++; 
        if(freq[s[j]-'a'] == 1) unique++;

        while (unique>k)
        {
            freq[s[i]-'a']--;
            if(freq[s[i]-'a']==0) unique--;

            i++;
        }
        

        if(unique==k) cout << j-i+1 << " ";

        j++;
    }
    
    
     
    return 0;
}
