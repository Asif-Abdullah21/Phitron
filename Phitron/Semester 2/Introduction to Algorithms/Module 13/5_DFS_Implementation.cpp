#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool visited[N];
int depth[N];
int height[N];
vector<int> adj[N];

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;

    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(!visited[v])
        {
            dfs(v);
        }
    }
    
}

int main()
{
    int n,e;
    cin >> n >> e;

    while (e--)
    {
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    dfs(1);
    
    
    
    return 0;
}




/*


#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool visited[N];
int depth[N];
int height[N];
vector<int> adj[N];

void dfs(int u)
{
    cout <<u << " ";
    //visited[u] = true;

    for(int v:adj[u])
    {
        if(!visited[v])
        {
            visited[u] = true;
            depth[v] = depth[u]+1;
            dfs(v);
            height[u] = max(height[u],height[v]+1);
        }
    }
}

int main()
{
    int n,e;
    cin >> n >> e;

    while (e--)
    {
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    dfs(1);
    cout << endl;

    for (int i = 1; i <=n; i++)
    {
       cout << "Node " << i << ": depth: "<< depth[i] << endl;
    }
    cout << endl;

    for (int i = 1; i <=n; i++)
    {
       cout << "Node " << i << ": height: "<< height[i] << endl;
    }
    
    
    
    return 0;
}




*/