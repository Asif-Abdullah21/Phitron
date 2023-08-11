#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;

    for(auto v:adj[u])
    {
        if(visited[v]==false)
        {
            dfs(v);

            height[u] = max(height[v]+1,height[u]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int node;
    cin >> node;

    cout << "height of "<<node<<" = "<<height[node] << endl;
    
    return 0;
}
