#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; // 10 20 30 40 50
        st.push(x);
    }
    

    while (!st.empty())
    {
        cout << st.top() << " "; //50 40 30 20 10
        st.pop();
    }
    
     
    return 0;
}



//---------------------------



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);

//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     st.pop();
//     if(!st.empty())
//     {
//         cout << st.top() << endl;
//         st.pop();
//     }
     
//     return 0;
// }
