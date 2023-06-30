#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector<int> v;
    void push(int val) //O(1) //tbe n ta value push krle O(n) hbe
    {
        v.push_back(val);
    }
    void pop() //O(1)
    {
        v.pop_back();
    }
    int top() //O(1)
    {
        return v.back(); //return the last value
    }
    int size() //O(1)
    {
        return v.size();
    }
    bool empty() //O(1)
    {
        if(v.size()==0) return true;
        else return false;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty()==false) // while (!st.empty()) //samne ! deyay not bujhay
    {
        cout << st.top() << " "; //50 40 30 20 10
        st.pop();
    }
    

    // for (int i = 0; i < n; i++) //vai dekhay nai eta
    // {
    //     cout << st.top() << endl;

    //     st.pop();
    // }
    


    /*For taking single values:
    st.push(10);
    st.push(20);
    cout << st.top() << endl;//cout << "top: "<< st.top() << " and size: " << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    if(st.empty()==false)
    {
        cout << st.top() << endl;
    }
    */

    
    return 0;
}



// ------------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;

// class myStack
// {
// public:
//     vector<int> v;

//     void push(int val){           
//         v.push_back(val);
//     }

//     void pop(){
//         v.pop_back();
//     }

//     int top(){
//         return v.back();
//     }

//     int size(){
//         v.size();
//     }

//     bool empty(){
//         if(v.size() == 0) return true;
//         else return false;
//     }

// };

// int main()
// {
//     myStack st;
//For taking single values:

//     st.push(10);
//     st.push(20);
//     cout << st.top() << endl;       // 20 //
//     st.pop();
//     cout << st.top() << endl;       // 10 //
//     st.pop();
//     cout << st.top() << endl;       // 134232647 (Garbage value, online judge e runtime error ba segmentation fault dey) //
    
//     return 0;
// }