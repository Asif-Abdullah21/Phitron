#include<stdio.h>
#include<string.h>
int main()
{
    char s1[11],s2[11];
    scanf("%s",s1);
    scanf("%s",s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s%s\n",s1,s2);
    char temp;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s\n",s1,s2);
    
    return 0;
}

/* 
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[50],s2[50],copyof_s1[50],temp;
    gets(s1);
    gets(s2);

    for(i=0; s1[i] !='\0'; i++)
    {
        copyof_s1[i] = s1[i];
    }
    //copyof_s1[i] = '\0';

    int len1= strlen(s1);
    int len2= strlen(s2);

    for(j=0; s2[j] != '\0';j++)
    {
        copyof_s1[len1+j] = s2[j];
    }
    copyof_s1[len1+j] = '\0';
    printf("%d %d\n",len1,len2);
    printf("%s\n",copyof_s1);

    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s\n",s1,s2);

    return 0;
}

*/