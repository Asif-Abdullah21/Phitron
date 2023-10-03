#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k; cin >> k;

    int mx = INT_MIN;
    int i=0,j=0,sum=0;

    while (j<n)
    {
        sum += a[j];

        if(j>=k-1)
        {
            mx = max(mx, sum);
            cout << sum << " ";
            sum -= a[i];
            i++;
        }
        j++;
    }
    
    
    cout << "\nMax sum of subarray of size k: " << mx << endl;
     
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k; cin >> k;

    int mx = INT_MIN;

    int sum =0;

    for (int i = 0; i < k; i++)
    {
        sum += a[i];
        mx = max(sum,mx);
    }
    //0 1 2 3 4 5 //k=3;
    for (int i = k; i < n; i++)
    {
       // cout << sum << " ";
        sum += a[i];
        sum -= a[i-k];

        mx = max(sum,mx);
    }

    cout << mx << endl;
    

     
    return 0;
}


*/