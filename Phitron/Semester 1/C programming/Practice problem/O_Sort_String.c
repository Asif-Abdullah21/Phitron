#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n); 
    getchar(); // taking enter as a character
    char ch;
    int a[30] = {0};

    for (int i=0;i<n;i++)
    {
        scanf("%c", &ch);
        int val = ch - 97;
        a[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            for (int j = 0; j < a[i]; j++)
            {
                printf("%c", i+97);
            }
        }
    }

    return 0;
}



// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
    
//     char ch;
//     int a[30] = {0};

//     while (scanf("%c", &ch) != EOF)
//     {
//         int val = ch - 97;
//         a[val]++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (a[i] != 0)
//         {
//             for (int j = 0; j < a[i]; j++)
//             {
//                 printf("%c", i+97);
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d\n", &n); //\n na dile enter ta zero tomo character hisebe count krbe
    
//     char ch;
//     int a[30] = {0};

//     for (int i=0;i<n;i++)
//     {
//         scanf("%c", &ch);
//         int val = ch - 97;
//         a[val]++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (a[i] > 0)
//         {
//             for (int j = 0; j < a[i]; j++)
//             {
//                 printf("%c", i+97);
//             }
//         }
//     }

//     return 0;
// }



//Code by AsifMohammedSifat brother:

/*
//code in c++:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt[26]={0};
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        cnt[c-97]++;
    }
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<cnt[i];j++)
        {
            cout<<char(i+97);
        }
    }
    cout<<endl;
    return 0;
} 



//code in c:

#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d\n", &n);//taking the length from user
    char c;
    int cnt[26]= {0};
 
    for (int  i = 0; i <n; i++)
    {
        scanf("%c", &c);
        cnt[c-'a']++;
    }
    for (int i = 0; i <26; i++)
    {
        if (cnt[i]>0)
        {
            for (int j= 0; j <cnt[i]; j++)
            {
                printf("%c",i+'a');
            }
 
        }
    }
}


*/