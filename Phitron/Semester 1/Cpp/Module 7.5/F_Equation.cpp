#include <bits/stdc++.h>
using namespace std;

void solve(long x,long n)
{
    double ans = 0;  //Rahat_Khan_Pathan vai
    for (int i = 2; i <= n; i+=2)
    {
        ans += pow(x*1.0,i*1.0);
    }


    cout << (long long)ans << endl;
    
}

int main()
{
    long long x,n;
    cin >> x >> n;

    solve(x,n);
     
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void solve(int x,int n)
// {
//     long long ans = 0;
//     for (int i = 2; i <= n; i+=2)
//     {
//         long long temp=1;
//         for(int j=1;j<=i;j++)
//         {
//             temp *= x;
//         }

//         ans += temp;
//     }
    

//     cout << ans << endl;
    
// }

// int main()
// {
//     int x,n;
//     cin >> x >> n;

//     solve(x,n);
     
//     return 0;
// }


//-----------------------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// void solve(int x,int n)
// {
//     long long ans = 0,val=1;
//     for (int i = 2; i <= n; i+=2)
//     {
//         ans += (long long)(pow(x,i)+.5);
//     }

//     cout << ans << endl;
    
// }

// int main()
// {
//     int x,n;
//     cin >> x >> n;

//     solve(x,n);
     
//     return 0;
// }
