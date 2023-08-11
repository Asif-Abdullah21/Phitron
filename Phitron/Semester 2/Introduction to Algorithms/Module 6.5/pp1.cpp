#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
   // cout << u << " "; // 1 2 3 4
    visited[u] = true;

    for(auto v:adj[u])
    {
        if(visited[v]==false)
        {
            dfs(v);
        }
    }

    cout << u << " "; // 4 3 2 1

}

int main()
{
    int n;
    cin >> n;

    int e;
    cin >> e;

    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node "<< i << ": ";
    //     for (auto j : adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
