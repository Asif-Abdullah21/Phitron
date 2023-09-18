#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int capacity, int v[], int w[])
{
     // Base Case //
     if(n==0 || capacity==0) return 0;

    if (w[n] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n], v, w) + v[n]; // nibo, ar nile oi value ta plus korte hoy //
        int op2 = knapsack(n - 1, capacity, v, w);                       // nibo na //

        return max(op1, op2);
    }
    else return knapsack(n-1,capacity,v,w);
}

int main()
{
    int n;
    cin >> n;
    int v[n+2], w[n+2];

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }

    int capacity;
    cin >> capacity;

    cout << "Maximum Value: " << knapsack(n, capacity, v, w);

    return 0;
}





//-------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// int knapsack(int n, int capacity, int v[], int w[])
// {
//      // Base Case //
//      if(n==0 || capacity==0) return 0;

//     if (w[n - 1] <= capacity)
//     {
//         int op1 = knapsack(n - 1, capacity - w[n - 1], v, w) + v[n - 1]; // nibo, ar nile oi value ta plus korte hoy //
//         int op2 = knapsack(n - 1, capacity, v, w);                       // nibo na //

//         return max(op1, op2);
//     }
//     else return knapsack(n-1,capacity,v,w);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int v[n], w[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> w[i];
//     }

//     int capacity;
//     cin >> capacity;

//     cout << "Maximum Value: " << knapsack(n, capacity, v, w);

//     return 0;
// }
