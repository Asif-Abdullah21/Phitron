#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

const int N = 1e5+3;
vector<pii> adj[N];
bool visited[N];

class Edge{
    public:
    int u;
    int v;
    int w;

    Edge(int u,int v,int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class cmp
{
    public:
    bool operator()(Edge a,Edge b)
    {
        return a.w>b.w;  // a.w jodi b.w er theke boro hoy tahole swap kore dibe (choto theke boro swap er jonno) //
    }
};

void prim_s(int s)
{
    priority_queue<Edge,vector<Edge>,cmp> pq;
    pq.push(Edge(s,s,0));

    vector<Edge> edgeList;

    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();

        int u = parent.u;
        int v = parent.v;
        int w = parent.w;

        if(visited[v]) continue;

        visited[v] = true;
        edgeList.push_back(parent);

        for(auto child:adj[v])
        {
            if(!visited[child.first])
            {
                pq.push(Edge(v,child.first,child.second));
            }
        }
        

    }

    edgeList.erase(edgeList.begin());

    for(Edge val:edgeList)
    {
        cout << val.u << " " << val.v << " " << val.w << endl;
    }
    


}

int main()
{
    int n,e;
    cin >> n >> e;

    while (e--)
    {
        int u,v,w;
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    prim_s(1);
    
     
    return 0;
}






/*


muhammad sayem:


#include<bits/stdc++.h>
#define  pb  push_back
using namespace std;

int const N = 1e5+5;
vector<pair<int, int>> v[N];
bool visited[N];

class Edge
{
    public:
        int a;
        int b;
        int w;

        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

class cmp
{
    public:
        bool operator()(Edge a, Edge b){
            return a.w > b.w;       // a.w jodi b.w er theke boro hoy tahole swap kore dibe (choto theke boro swap er jonno) //
        }
};

void prims(int s){
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s, s, 0));

    vector<Edge> edgeList;

    while(!pq.empty()){
        Edge parent = pq.top();
        pq.pop();

        int a = parent.a;
        int b = parent.b;
        int w = parent.w;

        if(visited[b] == false){
            visited[b] = true;
            edgeList.pb(parent);
        
            for(int i=0; i<v[b].size(); i++){
                pair<int, int> child = v[b][i];

                int childNode = child.first;
                int childCost = child.second;

                if(visited[childNode] == false){
                    pq.push(Edge(b, childNode, childCost));
                }
            }
        } 
    }
    
    // edgeList.erase(edgeList.begin());

    cout <<  endl;
    for(Edge val: edgeList){
        cout << val.a << " " << val.b << " " << val.w << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;

        v[a].pb({b, w});
        v[b].pb({a, w});
    }

    prims(1);
    
    return 0;
}



*/