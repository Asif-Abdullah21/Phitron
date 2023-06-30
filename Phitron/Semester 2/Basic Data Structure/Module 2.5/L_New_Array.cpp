#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
   // vector<int> v2(n);
    vector<int> v2;

    int x;
    for (int i = 0; i < n; i++)
    {
        //cin >> v2[i];
        cin >> x;
        v2.push_back(x);
    }

    vector<int> v(v2);
    v.insert(v.begin()+n,v1.begin(),v1.end());

    for(int i:v)
    {
        cout << i << " ";
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int b[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> v(b,b+n);
//     v.insert(v.begin()+n,a,a+n);

//     for(int i:v)
//     {
//         cout << i << " ";
//     }



     
//     return 0;
// }