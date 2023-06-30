#include<stdio.h>
#include<string.h>
int main()
{
    char ch; // string nite pari nai karon array er size 10^6 er besi dibe
    int cnt[26]={0}; 
    while (scanf("%c",&ch) != EOF)
    {
        int val = ch-97;
        cnt[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(cnt[i] != 0) printf("%c : %d\n",i+97,cnt[i]);
    }
    
    return 0;
}

//---------------------------------------------------------------------------

//#include<stdio.h>
// #include<string.h>
// char str[10000001];

// int main()
// {
//     //char str[1000001];//char str[10000001]; evabe dile cf accept kre but it's not valid
//     scanf("%s", str);
//     char ch;

//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         int cnt=0;
//         for (int i = 0; i < strlen(str); i++)
//         {
//             if(ch==str[i]) cnt++;
//         }

//         if(cnt>0) printf("%c : %d\n", ch, cnt);
        
//     }
    
//     return 0;
// }

//-------------------------------------------------------------------


// #include<stdio.h>
// #include<string.h>
// char str[10000001];

// int main()
// {
//     //char str[1000001];//char str[10000001]; evabe dile cf accept kre but it's not valid
//     scanf("%s", str);
//     char ch;

//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         int cnt=0;
//         for (int i = 0; i < strlen(str); i++)
//         {
//             if(ch==str[i]) cnt++;
//         }

//         if(cnt>0) printf("%c : %d\n", ch, cnt);
        
//     }
    
//     return 0;
// }

// ---------------------------------------------------------------- //

// Rahat Khan Pathan vai's code //
/*
#include<stdio.h>
int main()
{
    char c;
    int cnt[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        cnt[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(cnt[i-'a']>0)
        {
            printf("%c : %d\n",i,cnt[i-'a']);
        }
    }
    return 0;
}
*/




// -------------------------------------------------------------------- //

// Fazly-Fardin //
/*
#include<stdio.h>
#include<string.h>
int main(){
    char c;
    int count[26] = {0};
    while(scanf("%c",&c) != EOF){
        count[c-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            printf("%c : %d\n",'a'+i,count[i]);
        }
    }
}
*/