#include<stdio.h>

char capital_to_small(char c)
{
    c = c+32;
    return c;
}

int main()
{
    char ch;
    scanf("%c",&ch);

    ch = capital_to_small(ch);

    printf("%c\n",ch);
    
    return 0;
}