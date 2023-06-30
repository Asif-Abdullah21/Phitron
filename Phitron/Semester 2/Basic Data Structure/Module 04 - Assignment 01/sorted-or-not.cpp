#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int f=true;
        for (int i = 1; i < n; i++)
        {
            if(a[i-1]>a[i])
            {
                f=false;
                break;
            }
        }

        f?cout << "YES\n":cout << "NO\n";
        
    }
    
     
    return 0;
}
