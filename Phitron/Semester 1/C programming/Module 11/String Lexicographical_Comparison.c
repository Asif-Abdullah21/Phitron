#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);

    int i=0;

    while(1)
    {
        if(s1[i]=='\0' && s2[i]=='\0')
        {
            printf("BOTH STRINGS ARE SAME\n");
            break;
        }
        else if(s1[i]=='\0')
        {
            printf("S1 is small\n");
            break;
        }
        else if(s2[i]=='\0')
        {
            printf("S2 is small\n");
            break;
        }


        if(s1[i]==s2[i]) i++;
        else if(s1[i]<s2[i])
        {
            printf("S1 is small\n");
            break;
        }
        else 
        {
            printf("S2 is small\n");
            break;
        }
    }
    
    return 0;
}

//-------------------------------------------------------------------

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