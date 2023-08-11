#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adj[N][N];
vector<int> v[N];

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adj[i][j];
            if(adj[i][j]==1) v[i].push_back(j);
        }
    }



    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    for (int i = 1; i <= n; i++)
    {
        cout << "List "<< i << " : ";
        for (auto j : v[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
