#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt1=0,cnt2=0;

    for (int i = 0;s[i] !='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z') cnt1++;
        else if(s[i]>='a' && s[i]<='z') cnt2++;
    }

    printf("%d %d\n",cnt1,cnt2);
    
    
    return 0;
}