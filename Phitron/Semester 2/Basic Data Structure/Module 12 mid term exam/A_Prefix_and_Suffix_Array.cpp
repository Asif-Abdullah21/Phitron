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
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int sz = n;
        n = (2*n)-2;
        vector<string> v;
        while (n--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        vector<string> v1; //tutorial
        for(string str:v)
        {
            if(str.size()==sz-1)
            {
                v1.push_back(str);
            }
        }

        string tmp1 = v1[0];
        string tmp2 = v1[1];

        int f=1;

        if(tmp1[0]!=tmp2[tmp2.size()-1]) f=0;
        else{
            reverse(tmp2.begin(),tmp2.end());
            if(tmp1!=tmp2) f=0;
        }

        if(f) yy;
        else nn;

        // string s1;
        // s1 = tmp1[0];
        // s1 += tmp2;

        // string s2;
        // s2 = tmp2[0];
        // s2 += tmp1;

        // string main_str;

        // cout << tmp1 << " " << tmp2 << endl;
        // cout << s1 << " " << s2 << endl;  
        
         
    }
     
    return 0;
}






//--------------------------------------------------------------------







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
// #define mm(a, x) memset(a, x, sizeof(a))
// using namespace std;
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int sz = n;
//         n = (2*n)-2;
//         vector<string> v;
//         while (n--)
//         {
//             string s;
//             cin >> s;
//             v.push_back(s);
//         }

//         vector<string> v1;
//         for(string str:v)
//         {
//             if(str.size()==sz-1)
//             {
//                 v1.push_back(str);
//             }
//         }

//         string tmp1 = v1[0];
//         string tmp2 = v1[1];

//         reverse(tmp2.begin(),tmp2.end());

//         if(tmp1 == tmp2) yy;
//         else nn;
         
//     }
     
//     return 0;
// }



