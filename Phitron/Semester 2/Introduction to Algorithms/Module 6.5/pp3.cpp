#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
vector<int> adj[N];
int adjMat[N][N];

int main()
{
    int n;
    cin >> n;

    int e;
    cin >> e;

    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    for (int i = 1; i <=n; i++)
    {
        for(auto j:adj[i])
        {
            adjMat[i][j] = 1;
        }
    }

    for (int i =1; i <=n; i++)
    {
        for (int j = 1; j <=n;j++)
        {
            cout << adjMat[i][j] << " ";
        }

        cout << endl;
        
    }
    
    

    return 0;
}


//--------------------------------------------------------------------




/*
Muhammad_Sayem:

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adjmat[N][N];
vector<int> adj[N];

int main()
{
    int n, m, i, j;
    cin >> n >> m;

    while(m--){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    for(i=1; i<=n; i++){
        for(j=0; j<adj[i].size(); j++){
           // cout << adj[i][j] << " ";
            if(adj[i][j] != 0){
                adjmat[i][adj[i][j]] = 1;
            }

        }
     //   cout << endl;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


*/