//vector of strings with spaces:


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin,v[i]);
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    
    for(string val:v)
    {
        cout << val << endl;
    }
    
     
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();

//     vector<string> v;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         getline(cin,s);
//         v.push_back(s);
//     }

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << endl;
//     // }
    
//     for(string val:v)
//     {
//         cout << val << endl;
//     }
    
     
//     return 0;
// }


//------------------------------------------------------------------------------------------------------


////vector of string without space:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;  
//     cin >> n;

//     vector<string> v;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s; //cin >> v[i]; evabe kora jaito jodi vector<string> v(n); likhtam
//         v.push_back(s);
//     }

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << endl;
//     // }
    
//     for(string val:v)
//     {
//         cout << val << endl;
//     }
    
     
//     return 0;
// }
