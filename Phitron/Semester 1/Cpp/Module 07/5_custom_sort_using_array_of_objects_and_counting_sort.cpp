#include<bits/stdc++.h>
using namespace std;

class CustomSort{
    public:
    char ch;
    int cnt;

};

bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt>b.cnt) return true;
    else return false;
}

int main()
{
 
    CustomSort freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i].ch = i+'a';  // freq[i].ch = i+97; is also valid //
        freq[i].cnt=0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        freq[c-'a'].cnt++;
    }

    sort(freq,freq+26,cmp);

    for (int i = 0; i < 26; i++)
    {
        if(freq[i].cnt>0)
        {
            for (int j = 0; j < freq[i].cnt; j++)
            {
                cout << freq[i].ch;
            }
            
        }
    }
    
    

    

    
    return 0;
}


//--------------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Characters{
//     public:
//     int cnt;
//     char ch;
// };

// bool cmp(Characters a,Characters b)
// {
//     if(a.cnt>b.cnt) return true;
//     else return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     char c;

//     Characters a[26];

//     for (int i = 0; i < 26; i++)
//     {
//         a[i].ch = i;
//         a[i].cnt = 0;
//     }
    

//     for (int i = 0; i < n; i++)
//     {
//         cin >> c;
//         a[c-'a'].cnt++;
//     }

//     sort(a,a+26,cmp);

//     for (int i = 0; i <= 25; i++)
//     {
//         if(a[i].cnt>0) 
//         {
//             for (int j = 0; j < a[i].cnt; j++)
//             {
//                 cout << char(a[i].ch+97);
//             }
            
//         }
//     }
    
     
//     return 0;
// }
