#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

bool IsCycleDfs(int u, int p=-1) // int p=-1 mane jokhon p kisu deya thkbe na tokhon -1 dhore nibe
{
    visited[u] = true;
    // cout << u << " ";
    bool flag = false; //flag = cyccleExist

    for(int v:adj[u])
    {
        if(v==p) continue;
        if(visited[v]) return true;
        flag = flag | IsCycleDfs(v,u);
     //   if(flag) return true;
    }

    return flag;

}

int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isCycle = false;

    for (int i = 1;i<=n; i++)
    {
        if(visited[i]==false) 
        {
            isCycle |= IsCycleDfs(i);
        }
    }

    // for (int i = 1;i<=n; i++)
    // {
    //     if(visited[i]) continue;
    //     isCycle |= IsCycleDfs(i);
    // }

    if(isCycle){
        cout << "Cycle Detected" << endl;
    }
    else{
        cout << "No cycle detected" << endl; 
    }
    

    return 0;
}



/*


for one connected graph orthat ekta component thkle

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

bool IsCycleDfs(int u, int p)
{
    visited[u] = true;
    // cout << u << " ";
    bool flag = false; //flag = cyccleExist

    for(int v:adj[u])
    {
        if(v==p) continue;
        if(visited[v]) return true;
        flag = flag | IsCycleDfs(v,u);
     //   if(flag) return true;
    }

    return flag;

}

int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (IsCycleDfs(1, -1))
        cout << "Cycle Detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}








*/