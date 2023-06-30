#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
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

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;

    cout << pre[4] - pre[1]; //21 - 10 = 11

    // With one array //
    /*
    
    for(int i=1; i<n; i++){
        a[i] = a[i-1] + a[i];
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    */
    

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     long long sum = 0;

//     long long pre[n];

//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//         pre[i] = sum;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << pre[i] << " ";
//     }
//     cout << endl;

//   //  cout << pre[4] - pre[1]; //21 - 10 = 11

//     // With one array //
//     /*
    
//     for(int i=1; i<n; i++){
//         a[i] = a[i-1] + a[i];
//     }

//     for(int i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
//     */
    

//     return 0;
// }