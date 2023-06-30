#include<stdio.h>
#include<string.h>

void fun(char s[]) //void fun(char *s)
{
     printf("length: %d\n", strlen(s));
     printf("String: %s\n", s);
}

int main()
{
    char str[20] = "Hello";
    fun(str);       // string er khetre length pathanor dorkar hoy na karon amra function er vitore length ber korte partasi
    
    return 0;
}