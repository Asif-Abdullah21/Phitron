#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
         // Pop the first node from the queue and insert their neighbours to the queue //
        int u = q.front(); // 'u' variable for storing the front element of the queue //
        q.pop();
        cout << u << " "; //visitig node u

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

    bfs(1);
    
    for(int i=1; i<=n; i++){
        cout << "Level of " << i << ": " << level[i] << endl;
    }
    
    
     
    return 0;
}
