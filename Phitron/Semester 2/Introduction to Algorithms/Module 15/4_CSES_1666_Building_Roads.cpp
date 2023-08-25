#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
vector<int> adj[N];

void dfs(int u)
{
    visited[u] = true;

    for(auto v:adj[u])
    {
        if(visited[v]==false) dfs(v);
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
    vector<int> v;
    int cnt=0;

    for (int i = 1; i <=n; i++)
    {
        if(!visited[i])
        {
            v.push_back(i);
          //  cnt++;
            dfs(i);
        }
    }

    cout << v.size()-1 << endl;
    //cout << cnt-1 << endl;

    for (int i = 0; i < v.size()-1; i++)
    {
        cout << v[i] <<" " << v[i+1] << endl;
    }
    
    
    
     
    return 0;
}
