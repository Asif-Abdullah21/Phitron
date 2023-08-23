#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<pair<int,int>> v[N];
int dist[N];

void dijkstra(int s)  //O(Nodes*Edges) //O(N*E)
{
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
         
        for (int i = 0; i < v[parent].size(); i++)
        {
            // pair<int,int> child = v[parent][i];
            // int ChildNode = child.first;
            // int ChildCost = child.second;
            int ChildNode = v[parent][i].first;
            int ChildCost = v[parent][i].second;

            if(dist[parent]+ChildCost<dist[ChildNode])
            {
                dist[ChildNode] = dist[parent]+ChildCost;
                q.push(ChildNode);
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
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<pair<int,int>> v[N];
int dist[N];

void dijkstra(int s)  //O(Nodes*Edges) //O(N*E)
{
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
         
        for(auto vPair:v[u])// for(pair<int,int> vPair:v[u])
        {
            int v = vPair.first;
            int w = vPair.second;

            if(dist[v]>dist[u]+w)
            {
                dist[v] = dist[u]+w;
                q.push(v);
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