#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a,a+n)
#define rev(a) reverse(a,a+n)
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
    FIO;
    string s;
    cin >> s;

    //cout << s.find("EGYPT"); //jekhane pabe tar starting index dibe r na paile -1

    for (int i = 0; i < sz(s); i++)
    {
        if(s.find("EGYPT") != -1)
        {
            s.replace(s.find("EGYPT"),5," "); // oi index theke poroborti 5 ta index ke " " dara replace kre dibe
        }
    }

    cout << s << endl;
    
    return 0;
}

// /*
// ||-----------------------||
// ||  Asif Mohammed Sifat  ||
// ||  Department of CSE    ||
// ||   CS Instructor       ||
// ||Phitron,ProgrammingHero||
// ||-----------------------||
// */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);

//     while(str.find("EGYPT") != -1){
//         str.replace(str.find("EGYPT"), 5," ");
//     }        

//     cout<<str<<endl;
              
//     return 0;
// }




// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define sort(a) sort(a,a+n)
// #define rev(a) reverse(a,a+n)
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
//     string s;
//     cin >> s;

//     for (int i = 0; i < sz(s); i++)
//     {
//         if(s[i]=='E' && s[i+1] =='G' && s[i+2] =='Y' && s[i+3] =='P' && s[i+4] =='T')
//         {
//             cout << " ";
//             i+=4;
//         }
//         else cout << s[i];
//     }
    
//     return 0;
// }
