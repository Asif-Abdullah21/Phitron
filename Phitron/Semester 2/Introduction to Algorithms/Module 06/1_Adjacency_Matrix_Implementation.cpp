// With weight //

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adjMat[N][N];

int main()
{
    int n,m;
    cin >> n >> m; // number of nodes (n) and number of edges (m) //

    for (int i = 0; i < m; i++) // // m porjonto cholbe //
    { 
        int u,v,w;
        cin >> u >> v >>w;

        adjMat[u][v] = w;
      //  adjMat[v][u] = 1; // // undirect hole ei line dite hoy //
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }

        cout << endl;
        
    }
     
    return 0;
}   

/*

// Without weight // 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adjMat[N][N];

int main()
{
    int n,m;
    cin >> n >> m; // number of nodes (n) and number of edges (m) //

    for (int i = 0; i < m; i++) // // m porjonto cholbe //
    { 
        int u,v;
        cin >> u >> v;

        adjMat[u][v] = 1;
      //  adjMat[v][u] = 1; // // undirect hole ei line dite hoy //
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << " ";
        }

        cout << endl;
        
    }
    
     
    return 0;
}


*/