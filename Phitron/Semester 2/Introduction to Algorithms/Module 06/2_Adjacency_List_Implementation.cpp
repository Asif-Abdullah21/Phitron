#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adj[N]; //with weight //

int main()
{
    int n,m;
    cin >> n >> m; // number of nodes (n) and number of edges (m) //

    for (int i = 0; i < m; i++) // // m porjonto cholbe //
    { 
        int u,v,w;
        cin >> u >> v >>w;

        adj[u].push_back({v,w});
        //adj[v].push_back({u,w}); // // undirect hole ei line dite hoy //
    }

     for (int i = 1; i <= n; i++)
    {
        cout<<"List " << i << " : ";
         for(auto j:adj[i])//for(pair<int,int> j:adj[i])
        {
            cout << "(" << j.first << ", " << j.second << ") ";
        }

        cout << endl;
        
    }

    
    
    
     
    return 0;
}   


/*

// Without weight //

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];

int main()
{
    int n,m;
    cin >> n >> m; // number of nodes (n) and number of edges (m) //

    for (int i = 0; i < m; i++) // // m porjonto cholbe //
    { 
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
       // adj[v].push_back(u); // // undirect hole ei line dite hoy //
    }

     for (int i = 1; i <= n; i++)
    {
        cout<<"List " << i << " : ";
        for(int j:adj[i]) cout << j << " ";

        cout << endl;
        
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"List " << i << " : ";
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }

    //     cout << endl;
        
    // }
    
    
     
    return 0;
}   


*/

