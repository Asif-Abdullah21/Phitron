#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLevel[1000];

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int findLeader(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b)
{
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if (leaderA != leaderB)
    {
        if (parent[leaderA] > parent[leaderB])
        {
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
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        dsu_union(a, b);
    }


    for (int i = 1; i <= n; i++)
    {
        cout << parentSize[i] << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << parent[i] << " ";
    }

    return 0;
}


/* 
   --> Leader ekjon hoilei hoise, union by size othoba union by rank er khetre 
   same input e dui jaygay dui rokom leader ashte pare, eita somossa nai.

   --> DSU er khetre union by size othoba union by rank diye korte hoy....
   karon ei duitar complexity onek valo. Noraml union er complexty er chaite //

*/