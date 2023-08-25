#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<int> adj[N];
vector<int> components;
void dfs(int u)
{
    visited[u] = true;
    components.push_back(u);

    for (int v:adj[u])
    {
        if(!visited[v]) dfs(v);
    }
    
}

int main()
{
    int n, e;
    cin >> n >> e;
    

    while(e--){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int connectedComponents=0;

    for (int i = 1; i <=n; i++)
    {
        if(!visited[i])
        {
            connectedComponents++;
            dfs(i);

            cout <<"Component " <<connectedComponents<<": ";
            for(int val:components)
            {
                cout << val << " "; 
            }
            cout << endl;
            components.clear();
        }
    }
    
     cout << "Number of connected components: " << connectedComponents << endl;

    
    
    return 0;
}