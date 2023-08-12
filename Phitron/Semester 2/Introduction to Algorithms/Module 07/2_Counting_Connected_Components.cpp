#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
   // cout << u << " ";

    for(auto v:adj[u])
    {
        if(visited[v]==false)
        {
            dfs(v);
        }
    }
}

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        //cout << u << " ";

        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // dfs(1);
    //  bfs(1);

    int connectedComponents = 0;

    for (int i = 1; i <=n; i++)
    {
        if(visited[i]==false)
        {
            connectedComponents++;
            bfs(i);
        }

    }

    // for (int i = 1; i <=n; i++)
    // {
    //     if(visited[i]) continue;
        
    //     dfs(i);
    //     connectedComponents++;

    // }

    cout << "Number of connected components: " << connectedComponents << endl;
    


    return 0;
}
