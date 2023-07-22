#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    vector<int> v;
    int n;
    cin >> n; //5

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);  //10 60 40 50 30

        int cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2; // parent index ber korar formula
            if (v[parent_idx] > v[cur_idx])     // child index er value boro holei swap hoy //
            {
                swap(v[parent_idx], v[cur_idx]);
            }
            else break;

            cur_idx = parent_idx;
        }
    }

    for (int val : v)
    {
        cout << val << " "; //10 30 40 60 50
    }

    return 0;
}

