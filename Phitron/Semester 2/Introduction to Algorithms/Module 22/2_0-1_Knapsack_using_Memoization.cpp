#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int knapsack(int n, int capacity, int v[], int w[])
{
     // Base Case //
     if(n==0 || capacity==0) return 0;

     if(dp[n][capacity] != -1) return dp[n][capacity];

    if (w[n] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n], v, w) + v[n]; // nibo, ar nile oi value ta plus korte hoy //
        int op2 = knapsack(n - 1, capacity, v, w);                       // nibo na //

        return dp[n][capacity] = max(op1, op2);
    }
    else return dp[n][capacity] = knapsack(n-1,capacity,v,w);
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

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=capacity; j++)
        {
            dp[i][j] = -1;
        }
         
    }
    

    cout << "Maximum Value: " << knapsack(n, capacity, v, w);

    return 0;
}





//-------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

//int dp[1005][1005];

// int knapsack(int n, int capacity, int v[], int w[])
// {
//      // Base Case //
//      if(n==0 || capacity==0) return 0;

//if(dp[n][capacity] != -1) return dp[n][capacity];

//     if (w[n - 1] <= capacity)
//     {
//         int op1 = knapsack(n - 1, capacity - w[n - 1], v, w) + v[n - 1]; // nibo, ar nile oi value ta plus korte hoy //
//         int op2 = knapsack(n - 1, capacity, v, w);                       // nibo na //

//         return dp[n][capacity] = max(op1, op2);
//     }
//     else return dp[n][capacity] = knapsack(n-1,capacity,v,w);
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

    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 0; j <=capacity; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
         
    // }

//     cout << "Maximum Value: " << knapsack(n, capacity, v, w);

//     return 0;
// }
