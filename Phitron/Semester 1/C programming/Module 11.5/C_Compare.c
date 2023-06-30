#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    scanf("%s %s",s1,s2);

    int i = 0;

    while(1)
    {
        if(s1[i] =='\0' && s2[i] == '\0')
        {
            printf("%s\n",s1);//s2 dileu hoto
            break;
        }
        else if(s1[i] =='\0')
        {
            printf("%s\n",s1);
            break;
        }
        else if(s2[i] =='\0')
        {
            printf("%s\n",s2);
            break;
        }

        if(s1[i]==s2[i]) i++;
        else if(s1[i]<s2[i])
        {
            printf("%s",s1);
            break;
        }
        else{
            printf("%s\n",s2);
            break;
        }
    }
    
    return 0;
}

/*with built in function

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    gets(s1);//scanf("%s",s1);
    gets(s2);//scanf("%s",s2);

    int value = strcmp(s1,s2);

    if(value>0) printf("%s\n",s2);
    else if(value<0) printf("%s\n",s1);
    else printf("%s",s1);//else printf("%s",s1);

    return 0;
}

*/

/*Method of iftkhar ahmed vai

#include<stdio.h>
int main()
{

    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0;

    while(str1[i] == str2[i])
    {
        i++;
    }

    if(str1[i] == '\0')
    {
        printf("%s",str1);
        return 0;
    }

    if(str2[i] == '\0')
    {
        printf("%s",str2);
        return 0;
    }

    if(str1[i] < str2[i])
    {
        printf("%s",str1);
        return 0;
    }

    printf("%s",str2);
  

    return 0;
}
 


*/