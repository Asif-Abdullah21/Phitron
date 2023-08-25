#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int dist[N];
int parent[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
   // dist[s] = 0;
    visited[s] =true;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v:adj[u])
        {
            if(!visited[v])
            {
                q.push(v);
                parent[v] = u;
            //    dist[v] = dist[u] + 1;
                visited[v] = true;
            }
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

    bfs(1);

    int d;
    cin >> d;

    if(visited[d])
    {
        vector<int> vec;
        int x = d;
        while (x!=-1)
        {
            vec.push_back(x); //5 4 3 1
            x = parent[x];
        }

        reverse(vec.begin(),vec.end());

        for(int path:vec)
        {
            cout << path << " ";
        }
        cout << endl;
        
    }
    else cout << "No path found\n";


    
     
    return 0;
}
