#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        bool f = false;
        int val;
        cin >> val;

        for (int i = 0; i < n; i++)
        {
            if(v[i] == val)
            {
                f = true;
                break;
            }
        }

        f?cout << "found\n" : cout << "not found\n";
        
    }
    
     
    return 0;
}


