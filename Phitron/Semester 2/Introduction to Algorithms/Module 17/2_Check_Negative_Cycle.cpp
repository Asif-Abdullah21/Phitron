#include <bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int u;
        int v;
        int w;

        Edge(int u, int v, int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main()
{
    int n,e;
    cin >> n >> e;
    vector<Edge> vec;

    for (int i = 0; i < e; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;

        Edge ed(u,v,w);

        vec.push_back(ed);
    }

    int dist[n+2];
    for (int i = 0; i <=n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[1]= 0;

    for (int i = 1; i <=n-1; i++) //O(n*e)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            int u = vec[j].u;
            int v = vec[j].v;
            int w = vec[j].w;

            if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;
            }
        }
        
    }

    bool cycle = false;

    for (int j = 0; j < vec.size(); j++)
    {
            Edge ed = vec[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if(dist[u]+w<dist[v])
            {
                cycle = true;
                break;
               // dist[v] = dist[u]+w;
            }
    }

    if(cycle){
        cout << "Negative Cycle Exists Here!!!" << endl; //so, no ans//
    }
    else{
        for(int i=1; i<=n; i++){
            cout << "Distance of Node " << i << ": " << dist[i] << endl; 
        }
    }
    
    
    
    
     
    return 0;
}
