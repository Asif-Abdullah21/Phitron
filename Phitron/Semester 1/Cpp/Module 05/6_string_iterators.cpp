#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; 
    // pointer ke iterate korte chaile iterator banano lagbe

    for (auto it = s.begin(); it < s.end(); it++)  //    /// C++ version 11 er porer gulo te 'auto' diye kaj kora jay. eketre automatically detect kore ney /// 
    {
        cout << *it << " "; 
    }

    // for (string :: iterator it = s.begin(); it < s.end(); it++) // /// Evabe korle alada vabe upore iterator declare kora lage na ///
    // {
    //     cout << *it << " ";    /// '*it' deya lagse karon eta pointer, dereference kore print kora lage ///
    // }

    // string :: iterator it; // it er jaygay onno name o deya jbe tbe normally it use kra hoy

    // for (it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    

    // cout << *s.begin() << endl;  /// 0-th index er char print kore //
    // cout << *s.end() << endl;    // cout << *str.end() << endl;
    // cout << *(s.end()-1) << endl;      /// Last char ke print kore ///
    
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     cout << *s.begin() << endl;  /// 0-th index er char print kore //
//     cout << *s.end() << endl;    // cout << *str.end() << endl;
//     cout << *(s.end()-1) << endl;      /// Last char ke print kore ///
    
//     return 0;
// }


//----------------------------------------------------------------
    //for (int i = 0; i < s.size(); i++) 
    // {
    //     cout << s[i] << " "; /// normally iterate krlam, evabe value access korake iterate kora bole
    // }

// ----------------------------------------------------------------------- //


/*
str.begin() pointer hishabe kaj kore tai direct access kora jay na.
*str.begin() diye dereferrence kore value access kora lage.
str.begin() print korle address print korar kotha, kintu eita private property tai address dekha jay na.

str.end(), last char er porer je NULL char thake setake point kore.
str.begin() er moto same vabe kaj kore 
*/