#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello ";
    string s2 = "World";

    s1 += s2;  /// s1 = s1+s2 ///
    //s1.append(s2);//s1.append("Asif");   /// s1 = s1+s2 er moto same kaj e kore ///

    cout << s1 << endl;             /// Hello World ///
    cout << s2 << endl;             /// Hello ///

    
    string s = "Bangladesh";
    
    s.push_back('i');            /// String er las e ekta character push kore dey ///
    cout << s << endl;             /// Bangladeshi ///

    s.pop_back();               /// Last er index er character ta ke remove kore dey ///
    cout << s << endl;             /// Bangladesh ///

    s.pop_back();                 
    cout << s << endl;             /// Banglades ///

    return 0;
}