#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> vec;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        Edge ed(u, v, w);
        vec.push_back(ed);

        // cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    int dist[n+1];
    dist[1] =0;  // Source holo 1. Tai source er distance 0 kore deua hoise //

    for (int i = 1; i <= n - 1; i++)   // koto bar (n-1) relaxation hobe sheitar jonno ei loop //
    {
        for (int j = 0; j < vec.size(); j++)
        {
            Edge ed = vec[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;
            }
        }
    }

     for(int i=1; i<=n; i++){
        cout << "Distance of Node " << i << ": " << dist[i] << endl; 
    }

    

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> vec;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        Edge ed(u, v, w);
        vec.push_back(ed);

        // cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    int dist[n+1];
    dist[1] =0;  // Source holo 1. Tai source er distance 0 kore deua hoise //

    for (int i = 1; i <= n - 1; i++)   // koto bar (n-1) relaxation hobe sheitar jonno ei loop //
    {
        for (int j = 0; j < vec.size(); j++)
        {
           // Edge ed = vec[j];
            int u = vec[j].u;
            int v = vec[j].v;
            int w = vec[j].w;

            if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;
            }
        }
    }

     for(int i=1; i<=n; i++){
        cout << "Distance of Node " << i << ": " << dist[i] << endl; 
    }

    

    return 0;
}




*/