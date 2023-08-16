#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int> adj[N];
int level[N];
bool visited[N];
int parent[N];

// Complexsity of BFS: O(n+m) // n=node,m=edges

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1; // emni rakhlam, starting node er to parent nai tai -1 dia rakhlam

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v:adj[u])
        {
            if(visited[v]==false)
            {
                q.push(v);
                parent[v] = u;
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

    cout << "Distance: " << level[d] << endl;

    // for(int i=1; i<=n; i++){
    //     cout << "Parent of " << i << ": " << parent[i] << endl;
    // }

  // Path Finding: Complexity --> O(n) //
    int current = d;
    vector<int> path;

    while (current!=-1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());
    
    cout << "Path: "; 

    for(int node: path){
        cout << node << " ";
    }



     
    return 0;
}
