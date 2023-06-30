// String concatenation without function

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[200],s2[100];
//     scanf("%s %s",s1,s2);
//     int i=strlen(s1),j;
     
//     for(int j=0;j<=strlen(s2);j++)
//     {
//         s1[i] = s2[j];
//         i++;
//     }

//     printf("%s\n",s1);
    
//     return 0;
// }

//------------------------------------

// concate half of the second string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[200],s2[100];
//     scanf("%s %s",s1,s2);
//     int i=strlen(s1),j;
     
//     for(int j=0;j<strlen(s2)/2;j++)
//     {
//         s1[i] = s2[j];
//         i++;
//     }
//     s1[i] = '\0';

//     printf("%s\n",s1);
    
//     return 0;
// }

//------------------------------------------------------------

// // String concatenation with function

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[200],s2[100];
//     scanf("%s %s",s1,s2);
//     strcat(s1,s2);

//     printf("%s\n",s1);
    
//     return 0;
// }




/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[100];
    scanf("%s %s",s1,s2);
    int i,j;
     
    for(j=0,i=strlen(s1);j<=strlen(s2);j++,i++)
    {
        s1[i] = s2[j];
    }

    printf("%s\n",s1);
    
    return 0;
}
*/