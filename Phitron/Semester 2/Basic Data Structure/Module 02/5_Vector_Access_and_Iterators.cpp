#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    // cout << v[v.size()-1] << endl;
    // cout << v.back() << endl;

    // cout << v[0] << endl;
    // cout << v.front() << endl;


    //v.begin() - pointer to the first element
    // v.end() - pointer to the last element

    //iterator diye value access krbo:

   // vector<int> :: iterator it;

   //ekhane auto deya jbe na

    for (auto it = v.begin(); it < v.end(); it++) //ekhane auto deya jbe
    {
        cout << *it << " ";
    }
    
     
    return 0;
}
