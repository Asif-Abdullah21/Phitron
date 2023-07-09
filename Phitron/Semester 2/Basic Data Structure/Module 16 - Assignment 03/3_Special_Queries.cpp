#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;

    while (t--)
    {
        int x;
        string s;
        cin >> x;

        if(x==0)
        {
            cin >> s;
            q.push(s);
        }
        else if(x==1)
        {
            if(q.empty()) cout <<"Invalid\n";
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    
     
    return 0;
}
