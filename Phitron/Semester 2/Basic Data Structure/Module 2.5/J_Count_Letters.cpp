#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(26,0);
    char ch;
    while (cin >> ch)
    {
        v[ch-'a']++;
    }

    for (char i = 0; i <= 25; i++)
    {
        if(v[i]>0) cout << char(i+97)<< " : " << v[i] << endl;
    }
     
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v(26,0);
//     char ch;
//     while (cin >> ch)
//     {
//         v[ch-'a']++;
//     }

//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         if(v[i-'a']>0) cout << i<< " : " << v[i-'a'] << endl;
//     }
     
//     return 0;
// }
