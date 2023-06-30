#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello"; 

    cout << s[0] << endl;  /// Normally je kono index access ///
    cout << s[1] << endl;  /// Normally je kono index access ///
    cout << s.at(0) << endl; // same as cout << s[0] << endl;  /// Built-In function diye je kono index access ///
    cout << s.front() << endl; // same cout << s[0] << endl; /// First index access /// 
    

    cout << s[s.size()-1] << endl; //value of last index
    cout << s.back() << endl; //value of last index

    return 0;
}