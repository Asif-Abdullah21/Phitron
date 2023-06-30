#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt[26] = {0};

    for (int i = 0; s[i]!='\0' ; i++)
    {
        cnt[s[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",i+97,cnt[i]);
    }



    return 0;
}
