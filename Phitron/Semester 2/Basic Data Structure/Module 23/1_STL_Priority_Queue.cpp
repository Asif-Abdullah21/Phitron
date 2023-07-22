#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;//max heap

    while (true)
    {
        int val; cin >> val;

        if(val==0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN), N songkhok push korle complexity hoy O(NlogN) //
        }

        else if(val==1)
        {
            pq.pop(); //O(logn) //max tai delete hbe
        }

        else if(val==2)
        {
            cout << pq.top() << endl; //O(1) //max ta dibe
        }
        else break;
    }
    
     
    return 0;
}




/*
min heap stl:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;//min heap

    while (true)
    {
        int val; cin >> val;

        if(val==0)
        {
            int x;
            cin >> x;
            pq.push(x); //O(logn)
        }

        else if(val==1)
        {
            pq.pop(); //O(logn)
        }

        else if(val==2)
        {
            cout << pq.top() << endl; //O(1)
        }
        else break;
    }
    
     
    return 0;
}

*/

//heap er moddhe insert kre kre sort korake heap sort bole




