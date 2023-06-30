#include<stdio.h>

int char_to_ascii(char c)
{
    int n = c;
    return n;
}

int main()
{
    char ch;
    scanf("%c",&ch);

    int n = char_to_ascii(ch);

    printf("%d\n",n);
    
    return 0;
}