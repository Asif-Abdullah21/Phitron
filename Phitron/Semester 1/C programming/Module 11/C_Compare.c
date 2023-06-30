#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int i=0;

    while (1)
    {
        if(s1[i]=='\0' && s2[i]=='\0')
        {
            printf("%s\n",s1);// ekta dilei hbe(s1 or s2)
            break;
        }
        else if(s1[i]=='\0')
        {
            printf("%s\n",s1);
            break;
        }
        else if(s2[i]=='\0')
        {
            printf("%s\n",s2);
            break;
        }

        if(s1[i]==s2[i]) i++;
        else if(s1[i]<s2[i])
        {
            printf("%s\n",s1);
            break;
        }
        else {
            printf("%s\n",s2);
            break;
        }

    }
    
    
    return 0;
}

/* with built in function
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    gets(s1);
    gets(s2);

    int value = strcmp(s1,s2);

    if(value>0) printf("%s\n",s2);
    else if(value<0) printf("%s\n",s1);
    else printf("%s",s1);//else printf("%s",s1);

    return 0;
}
*/

/*

// #include<stdio.h>
// int main()
// {
//     char s1[100],s2[100];
//     scanf("%s %s",s1,s2);

//     for (int i = 0;; i++)
//     {
//          if(s1[i]=='\0' && s2[i]=='\0')
//         {
//             printf("%s",s1);
//             return 0;
//         }
//         if(s1[i]<s2[i])
//         {
//              printf("%s",s1);
//              return 0;
//         }
//         if(s1[i]>s2[i])
//         {
//              printf("%s",s2);
//              return 0;
//         }

//         if(s1[i]=='\0')
//         {
//              printf("%s",s1);
//              return 0;
//         }
        
//         if(s2[i]=='\0')
//         {
//              printf("%s",s2);
//              return 0;
//         }

       
//     }
    
    
//     return 0;
// }

*/