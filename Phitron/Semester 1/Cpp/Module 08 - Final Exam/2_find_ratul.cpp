#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    stringstream ss;
    ss<<s; 

    string word; 
    bool f = false;

    while (ss>>word)
    {
        if(word == "Ratul")
        {
            f=true;
            break;
        }
    }

    if(f) cout << "YES\n";
    else cout << "NO\n";
    
     
    return 0;
}
