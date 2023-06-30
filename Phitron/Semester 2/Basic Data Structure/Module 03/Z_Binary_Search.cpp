#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    while (q--)
    {
        int val;
        cin >> val;

        int l=0;
        int r=n-1;
        bool flag = false;

        while(l<=r)
        {
            int mid_i = (l+r)/2;

            if(a[mid_i]==val)
            {
                flag = true;
                break;
            }
            else if(val < a[mid_i]) r = mid_i-1;
            else if(val > a[mid_i]) l = mid_i+1;
        }

        if(flag == true) cout << "found\n";
        else cout << "not found\n";
    }
    
    
     
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin >> n >> q;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < q; i++) O(q*n) --> time limit exeeded,so we have to use binary search algorithm
//     {
//         bool f = false;
//         int val;
//         cin >> val;

//         for (int i = 0; i < n; i++)
//         {
//             if(v[i] == val)
//             {
//                 f = true;
//                 break;
//             }
//         }

//         f?cout << "found\n" : cout << "not found\n";
        
//     }
    
     
//     return 0;
// }
