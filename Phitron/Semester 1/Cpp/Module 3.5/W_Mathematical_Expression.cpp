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
    ll a,b,c;
    char ch,ch2;
    // cin >> a; getchar(); cin >> ch; getchar(); cin >> b;
    // getchar(); cin >> ch2; getchar(); cin >> c;

    cin >> a >> ch >> b >> ch2 >> c;
    //this ignores space , so there is no problem
  

    if(ch=='+')
    {
        if(a+b==c) cout << "Yes\n";
        else cout << a+b;
    }

    else if(ch=='-')
    {
        if(a-b==c) cout << "Yes\n";
        else cout << a-b;
    }

    else if(ch=='*')
    {
        if(a*b==c) cout << "Yes\n";
        else cout << a*b;
    }

    return 0;
}

/*
previous code in c:


#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d",&a);
    getchar();
    scanf("%c",&s);
    scanf("%d",&b);
    getchar();
    scanf("%c",&q);
    scanf("%d",&c);

    if(s == '+')
     {
         if(a+b == c) printf("Yes\n");
         else{
            printf("%d\n",a+b);
         }
     }

    else if(s == '-')
     {
         if(a-b == c) printf("Yes\n");
         else{
            printf("%d\n",a-b);
         }
     }

    else if(s == '*')
     {
         if(a*b == c) printf("Yes\n");
         else{
            printf("%d\n",a*b);
         }
     }


    return 0;
}
 

*/
