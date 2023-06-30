#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string str;
    cin >> str;

    stringstream ss;
    ss << s;

    string word;
    int cnt=0;

    while(ss>>word)
    {
        if(word==str) cnt++;
    } 
    cout << cnt << endl;

    return 0;
}


/*
// Sayem's Code:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    string s;
    cin >> s;

    int cnt = 0;

    while(str.find(s) != -1){
        str.replace(str.find(s),s.size(), "XXYY"); // this comment is written by me: char length er s find er jnno dile kaj krbe 
        cnt++;
    }
    
    cout << cnt << endl;

    return 0;
}


*/