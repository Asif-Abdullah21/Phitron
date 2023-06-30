#include<stdio.h>

char small_to_capital(char c)
{
    c = c-32;
    return c;
}

int main()
{
    char ch;
    scanf("%c",&ch);

    ch = small_to_capital(ch);

    printf("%c\n",ch);
    
    return 0;
}