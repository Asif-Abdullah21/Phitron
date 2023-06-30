#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i-1];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre[i] << " ";
    // } 
    

    while(q--) 
    {
        int l,r;
        long long sum =0;
        cin >> l >> r;
        l = l-1;
        r = r-1;

        if(l==0) sum = pre[r];
        else sum =  pre[r] - pre[l-1];

        cout << sum << endl;

    }
    return 0;
}
















// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin>>n>>q;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     while(q--) O(q*n)  ----> time limit exeeded tai prefix sum use krte hbe
//     {
//         int l,r;
//         cin>>l>>r;
//         l--;
//         r--;
//         int sum=0;
//         for(int i=l;i<=r;i++)
//         {
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }