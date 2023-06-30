// String cop without function

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    for (int i = 0; i <= strlen(b); i++)// len prjnto chalaisi jate null character tau copy hoye jay,len-1 prjnto chalaile alada kore null bole dite hoto
    {
        a[i] = b[i];
    }

    printf("%s %s",a,b);
    
    
    return 0;
}

// // String cop with function

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);

//     strcpy(a,b); // b string will be copied to a string 

//     printf("%s %s",a,b);
    
    
//     return 0;
// }