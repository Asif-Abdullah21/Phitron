#include <bits/stdc++.h>
using namespace std;

int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};       // Leader ke source dhora hoy //

int find(int n)
{
    while (parent[n]!=-1)
    {
        n = parent[n];
    }
    
    return n;
}

int main()
{
    cout <<"\nLeader of the node is: " << find(5) << endl;
     
    return 0;
}


// -> Jokhon group ba component thakbe ebong leader thakbe tokhon e (DSU(disjoint set union)/disjoint set/union-find) use korte hoy //