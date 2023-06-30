#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; //bbbaaggcc

    sort(s.begin(),s.end()); //(string er shurur pointer , ekdom null er pointer) diye dilam

    cout << s << endl; //aabbbccgg
     
    return 0;
}
