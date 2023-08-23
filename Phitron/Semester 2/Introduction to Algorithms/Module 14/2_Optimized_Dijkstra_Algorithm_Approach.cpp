#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> v[N];
int dist[N];
bool visited[N];

void dijkstra(int s)  //O(Nodes+Edges*logNodes) //O(N+ELogN)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});
    dist[s] = 0;

    while (!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();
         
        int ParentNode = parent.second;

        if(visited[ParentNode]) continue;

        visited[ParentNode] = true;

        int parentCost = parent.first;

        for (int i = 0; i < v[ParentNode].size(); i++)
        {
            int childNode = v[ParentNode][i].first;
            int childCost = v[ParentNode][i].second;

            if(parentCost+childCost<dist[childNode])
            {
                dist[childNode] = parentCost +childCost;
                pq.push({dist[childNode],childNode});
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
        int a,b,w;
        cin >> a >> b >> w;

        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    for (int i = 1; i <=N; i++)
    {
        dist[i] = INT_MAX;
    }
    

    dijkstra(1);

    for (int i = 1; i <=n; i++)
    {
        cout << "Distance of " << i << ": " << dist[i] << endl;
    }
    

     
    return 0;
}











/*

firoz sir er code:


#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int INF = 1e9+10;
const int N = 1e3+7;
vector<pii> adj[N];
vector<int> dist(N,INF); // n size er declare kore sob gular value infinity kre dilam
vector<bool> visited(N);


void dijkstra(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>> pq;

    dist[source] = 0;
    pq.push({dist[source],source});// pq.push({0,source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        visited[u] = true;

        for(pii vPair:adj[u])
        {
            int v = vPair.first;
            int w = vPair.second;

            if(visited[v]) continue;

            if(dist[v]>dist[u]+w) // if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    
}

int main()
{
    int n,m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin >> u >> v >>w;
     
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    dijkstra(1);

    for(int i=1; i<=n; i++){
        cout << "Distance of " << i << ": ";
        cout << dist[i] << endl;
    }
    
    
     
    return 0;
}

*/





/*

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> v[N];
int dist[N];
bool visited[N];

void dijkstra(int s)  //O(Nodes*Edges) //O(N*E)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0,s});
    dist[s] = 0;

    while (!q.empty())
    {
        pair<int,int> u = q.top();
        q.pop();

        if(visited[u.second]) continue;

        visited[u.second] = true;
         
        for(auto vPair:v[u.second])// for(pair<int,int> vPair:v[u])
        {
            int v = vPair.first;
            int w = vPair.second;

            if(dist[v]>u.first+w)
            {
                dist[v] = u.first+w;
                q.push({dist[v],v});
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
        int a,b,w;
        cin >> a >> b >> w;

        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    for (int i = 1; i <=N; i++)
    {
        dist[i] = INT_MAX;
    }
    

    dijkstra(1);

    for (int i = 1; i <=n; i++)
    {
        cout << "Node " << i << ": " << dist[i] << endl;
    }
    

     
    return 0;
}

*/