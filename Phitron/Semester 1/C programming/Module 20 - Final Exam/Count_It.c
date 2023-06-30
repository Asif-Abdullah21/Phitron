#include<stdio.h>
int main()
{
    char s[1003];
    fgets(s,1003,stdin);
    int capital=0,small=0,space = 0;

    for (int i = 0; s[i] !='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z') capital++;
        else if(s[i]>='a' && s[i]<='z') small++;
        else if(s[i]>=' ') space++;
    }

    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",space);
    
    
    return 0;
}