#include<bits/stdc++.h>
using namespace std;

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

const int N = 1e5+5;
int parent[N];
int parentLevel[N];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}

int findLeader(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if(leaderA != leaderB){

        if(parentLevel[leaderA] > parentLevel[leaderB]){
            // A leader hoise // 
            parent[leaderB] = leaderA; 
        }

        else if(parentLevel[leaderB] > parentLevel[leaderA]){
            // B leader hoise // 
            parent[leaderA] = leaderB; 
        }
        else{
            // Jekono ekta ke Leader korlei hoy //
            parent[leaderB] = leaderA; 
            parentLevel[leaderA]++;     // leaderB ke leader banaile parentLevel[leaderB]++; dite hoito //
        }

    }
}

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    vector<Edge> v;
    vector<Edge> ans;

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;

        v.push_back(Edge(a,b,w));
    } 

    sort(v.begin(),v.end(),cmp);

    for(Edge val:v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;

        if(findLeader(a) == findLeader(b)) continue;

        ans.push_back(val);// ans.push_back(Edge(a,b,w));
        dsu_union(a,b);
    }

    for(Edge value: ans){
        cout << value.a << " " << value.b << " " << value.w << endl;
    }

    
    return 0;
}

