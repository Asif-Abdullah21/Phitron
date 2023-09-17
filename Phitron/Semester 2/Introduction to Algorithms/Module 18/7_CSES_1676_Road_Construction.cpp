#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5+5;
int parent[N];
int parentSize[N];
 
void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
 
int findLeader(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

int maxComponent = INT_MIN;
 
void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);
 
    if(leaderA != leaderB){
 
        if(parentSize[leaderA] > parentSize[leaderB]){
            parent[leaderB] = leaderA; 
            parentSize[leaderA] += parentSize[leaderB];

            maxComponent = max(maxComponent,parentSize[leaderA]);
        }
 
        else{
            parent[leaderA] = leaderB; 
            parentSize[leaderB] += parentSize[leaderA];

            maxComponent = max(maxComponent,parentSize[leaderB]);
        }
    }
}
 
int main()
{
    int n, e, i;
    cin >> n >> e;
    dsu_set(n);

    int components = n;
 
    while(e--){
        int a, b;
        cin >> a >> b;

        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if(leaderA != leaderB)
        {
            components--;
            dsu_union(a,b);
        }

        cout << components <<" " << maxComponent << endl;

        
    }
 
    
    return 0;
}
