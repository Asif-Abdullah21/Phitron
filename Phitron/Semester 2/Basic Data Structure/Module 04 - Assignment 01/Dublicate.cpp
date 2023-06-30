#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    int f = false;

    for (int i = 1; i < n; i++)
    {
        if(a[i]==a[i-1])
        {
            f=true;
            break;
        }
    }

    if(f) cout << "YES\n";
    else cout << "NO\n";
    
     
    return 0;
}
