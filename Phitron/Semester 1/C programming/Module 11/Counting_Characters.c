#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int cnt[26] = {0};

    for (int i = 0; i<strlen(s); i++)
    {
        cnt[s[i] - 97]++;
        // int val = s[i]-'a';//int val = s[i]-97;
        // cnt[val]++;
    }
    /*
    for (int i = 0; s[i] != '\0'; i++)
    {
        cnt[s[i] - 97]++;
    }

    for (int i = 0; i<26; i++)
    {
       if(cnt[i]!=0) printf("%c - %d\n",i+97,cnt[i]);
    } */

    // for (int i = 0; i<strlen(s); i++)
    // {
    //    int value = s[i]-97;
    //    printf("%c - %d\n",s[i],cnt[value]);//printf("%c - %d\n",value+97,cnt[value]);
    // }

    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i]-97;
        if (cnt[val] != 0)
        {
            printf("%c - %d\n", s[i], cnt[val]);
            cnt[val] = 0;
        }
    }

    return 0;
}