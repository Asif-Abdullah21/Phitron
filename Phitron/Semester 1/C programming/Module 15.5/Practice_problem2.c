#include<stdio.h>

int my_len(char s[])//int my_len(char *s)
{
    int cnt=0;
    for (int i = 0; s[i] !='\0'; i++)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    
    char str[10000];
    scanf("%s",str);

    int len = my_len(str);

    printf("%d\n",len);
    return 0;
}