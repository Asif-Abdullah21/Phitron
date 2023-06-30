// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin>> n >> q;
//     vector<int> v(n+1);

//     for (size_t i = 1; i <=n; i++)
//     {
//         cin >> v[i];
//     }

//     while(q--)
//     {
//         int x,y;
//         cin >> x >> y;
//         long long sum =0;

//         for (size_t i = x; i <=y; i++)
//         {
//             sum += v[i];
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<long long> pre(n + 2);

    pre[0] = 0;

    for (size_t i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre[i] = v[i] + pre[i - 1];
    }

    // for (size_t i = 0; i <=n; i++)
    // {
    //     cout <<pre[i] << endl;
    // }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << pre[y] - pre[x - 1] << endl;
    }

    return 0;
}

