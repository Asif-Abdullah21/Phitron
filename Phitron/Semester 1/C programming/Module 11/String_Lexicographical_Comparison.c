#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);

    int val = strcmp(s1,s2);
    if(val<0) printf("S1 is small\n");
    else if(val>0) printf("S2 is small\n");
    else printf("Both are same\n");
    
    return 0;
}


//String Lexicographical Comparison without function

// #include<stdio.h>
// int main()
// {
//     char s1[100],s2[100];
//     scanf("%s %s",s1,s2);

//     int i=0;

//     while(1)
//     {
//         if(s1[i]=='\0' && s2[i]=='\0')
//         {
//             printf("BOTH STRINGS ARE SAME\n");
//             break;
//         }
//         else if(s1[i]=='\0')
//         {
//             printf("S1 is small\n");
//             break;
//         }
//         else if(s2[i]=='\0')
//         {
//             printf("S2 is small\n");
//             break;
//         }


//         if(s1[i]==s2[i]) i++;
//         else if(s1[i]<s2[i])
//         {
//             printf("S1 is small\n");
//             break;
//         }
//         else 
//         {
//             printf("S2 is small\n");
//             break;
//         }
//     }
    
//     return 0;
// }

