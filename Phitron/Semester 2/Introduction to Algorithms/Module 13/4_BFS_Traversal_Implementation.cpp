#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<int> a[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int i = 0; i < a[parent].size(); i++)
        {
            int child = a[parent][i];
            if(!visited[child])// if(visited[child]==false)
            {
                q.push(child);
                dist[child] = dist[parent]+1;
                visited[child] = true;
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

        a[u].push_back(v);
        a[v].push_back(u);

    }

    bfs(1);
    cout << endl;

    for (int i = 1; i <=n; i++)
    {
       cout << "Node " << i << ": "<< dist[i] << endl;
    }
    
    
    
    return 0;
}




/*

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<int> a[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for(int v:a[u])
        {
            if(visited[v]==false)
            {
                q.push(v);
                visited[v] = true;
                dist[v] = dist[u]+1;
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

        a[u].push_back(v);
        a[v].push_back(u);

    }

    bfs(1);
    cout << endl;

    for (int i = 1; i <=n; i++)
    {
       cout << dist[i] << endl;
    }
    
    
    
    return 0;
}

*/