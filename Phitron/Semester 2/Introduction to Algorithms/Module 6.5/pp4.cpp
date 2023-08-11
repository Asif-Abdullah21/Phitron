#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int depth[N];

void dfs(int u)
{
    visited[u] = true;

    for (int v : adj[u])
    {
        if (visited[v] == false)
        {
            depth[v] = depth[u]+1;
            dfs(v);
        }
    }
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

    int node;
    cin >> node;

    cout << "Depth of "<<node<<" = " <<depth[node]<< endl;

    return 0;
}
