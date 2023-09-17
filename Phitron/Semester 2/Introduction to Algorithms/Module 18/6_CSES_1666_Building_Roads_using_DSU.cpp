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
 
void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);
 
    if(leaderA != leaderB){
 
        if(parentSize[leaderA] > parentSize[leaderB]){
            parent[leaderB] = leaderA; 
            parentSize[leaderA] += parentSize[leaderB];
        }
 
        else{
            parent[leaderA] = leaderB; 
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
 
int main()
{
    int n, e, i;
    cin >> n >> e;
    dsu_set(n);
 
    while(e--){
        int a, b;
        cin >> a >> b;
 
        dsu_union(a, b);
    }
 
    set<int> s;

    // for(i=1; i<=n; i++){
    //     int leader = findLeader(i);
    //     cout << "Leader of " << i << ": " << leader << endl;
    // }
 
    for(i=1; i<=n; i++){
        int ldr = findLeader(i);
        s.insert(ldr);
    }
 
    vector<int> v;
 
    // for (auto it=s.begin();it!=s.end();it++)
    // {
    //     v.push_back(*it);
    // }

    for(int val: s)
    {
        v.push_back(val);
    }
    
    
    cout << v.size()-1 << endl;
 
    for(i=0; i<v.size()-1; i++){
        cout << v[i] << " " << v[i+1] << endl;
    }
 
    return 0;
}



/*

#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    while(e--){
        int a, b;
        cin >> a >> b;

        dsu_union(a,b);
    } 

    map<int,bool> mp;

    for (int i = 1; i <=n; i++)
    {
        int ldr = findLeader(i);
        mp[ldr] = true;
    }

    vector<int> v;

    for (pair<int,bool> p:mp)
    {
        v.push_back(p.first);
       // cout << p.first << " " << p.second << endl;
    }

    cout << v.size()-1 << endl;

    for (int i = 0; i < v.size()-1 ; i++)
    {
        cout << v[i] << " " << v[i+1] << endl;
    }
    
    
    
    return 0;
}

*/

 