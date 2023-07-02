#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n; //5

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; //10 20 30 40 50
        q.push(x);
    }

    cout << q.size() << endl; //4

    while (!q.empty())
    {
        cout << q.front() << " "; //10 20 30 40 50
        q.pop();
    }
     
    return 0;
}
