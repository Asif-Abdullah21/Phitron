#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);

    int i=0,j=strlen(s)-1,f=0;

    while (i<j)
    {
        if(s[i] != s[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }

    if(f==0) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}


/*// My first code, way tooooooooooooooo long, haha
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],temp[1001], ch;
    int i,len=0;
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        temp[i] = str[i];
    }
    temp[i] = '\0';

    for(i=0;str[i] !='\0';i++) len++;

    for(i=0;i<len/2;i++)
    {
        ch = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = ch;
    }

    int flag=0;
    for(i=0;str[i] !='\0' || temp[i] !='\0';i++)
    {
        if(str[i] != temp[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0) printf("YES\n");
    else printf("NO\n");


    return 0;
}

*/

/* with some functions of string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],temp[1001];
    gets(str);

    strcpy(temp,str);

    strrev(str);

    int value = strcmp(str,temp);

    if(value==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}




*/

/* credit: muhammad_sayem

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    scanf("%s", str1);
    char str2[1000];
    int i;
    int len = strlen(str1);
    char temp;

    // Copying the string to another string //

    for(i=0; i<len; i++){
        str2[i] = str1[i];
    }
    str2[len] = '\0';           // If we don't fix the last index of the second string with a null char, then it can give garbage value or wrong answer to the code //

    // Reversing the original string //

    for(i=0; i<len/2; i++){
        temp = str1[i];
        str1[i] = str1[len-1-i];
        str1[len-1-i] = temp;
    }

    // Comparing main string and the copied string //

    int flag = 0;

    for(i=0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}

*/