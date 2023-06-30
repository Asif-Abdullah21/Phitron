#include <bits/stdc++.h>
using namespace std;

#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    string s;

    getline(cin,s);

    stringstream ss;
    ss << s;
    string word;

    ss>> word;
    reverse(word.begin(),word.end());  
    cout << word;

    while(ss>>word)
    {
        reverse(word.begin(),word.end());   
        cout << " " << word;
    } 
    return 0;
}

//-----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
//     FIO;
//     string s;

//     getline(cin,s);

//     stringstream ss;
//     ss << s;
//     string word;

//     bool f = true;

//     while(ss>>word)
//     {
//         reverse(word.begin(),word.end());   
//         if(f==true) cout << word;
//         else cout << " " << word;
//         f = false;

//     } 
//     return 0;
// }


//--------------------------------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
//     FIO;
//     string s;

//     getline(cin,s);
//     string s1=s;

//     stringstream ss;
//     ss << s;
//     string word;
//     int cnt=0;

//     while(ss>>word)
//     {
//         cnt++;
//     } 

//     stringstream ss1;
//     ss1 << s1;

//     while(ss1>>word)
//     {
//         reverse(word.begin(),word.end());   
//         cout << word;
//         cnt--;
//         if(cnt>0) cout << " ";
//     } 
//     return 0;
// }



/*Muhammad_Sayem:


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string str2 = str;

    stringstream ss(str);
    stringstream ss2(str2);
    
    string word;
    string word2;
    int cnt = 0, flag = 0;

    while(ss2 >> word2){
        cnt++; 
    }

    while(ss >> word){
        reverse(word.begin(), word.end());
        cout << word; 
        flag++;
        if(flag != cnt) cout << " ";
    }
    
    return 0;
}


*/