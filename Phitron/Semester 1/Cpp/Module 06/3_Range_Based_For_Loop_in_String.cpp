#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;

    // for (int i = 0; i < s.size(); i++) //index soho character pete hole evabe access krte hbe
    // {
    //    cout << s[i] << endl;  //index er maddhome element pacchi
    // }

    //using range based for loop// pathan vai bolse shortcut for loop :) 

    // : -eitar name colon

    for(char ch:s) // string er vitore ekekta char thake tai char dilam, s theke char ch a ekta ekta kore character jacche
    {
        cout << ch << endl; // we will not get index here, just character gula pabo// ekhane direct element pacchi
    }
    
     
    return 0;
}
