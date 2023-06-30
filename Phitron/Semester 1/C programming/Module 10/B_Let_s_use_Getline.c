#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];

    fgets(str,10000001,stdin);
    for (int i = 0;str[i] != '\\'; i++)
    {
        printf("%c",str[i]);
    }
    
    
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[1000001];

//     fgets(str,10000001,stdin);
//     for (int i = 0;str[i] != '\0'; i++)
//     {
//         if(str[i]=='\\') break;
//         else printf("%c",str[i]);
//     }
    
    
//     return 0;
// }