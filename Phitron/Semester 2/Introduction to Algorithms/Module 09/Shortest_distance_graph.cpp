#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int> adj[N];
int level[N];
bool visited[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v:adj[u])
        {
            if(visited[v]==false)
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u]+1;
            }
        }
    }
    
}

int main()
{
    int n,e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    bfs(1);

    int s,d;
    cin >> s >> d;

    cout << level[d];
    
     
    return 0;
}
