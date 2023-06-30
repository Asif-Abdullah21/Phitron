#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1020],s2[1020];
    // scanf("%s",s1);
    // scanf("%s",s2);
    scanf("%s %s",s1,s2);

    int s1_sz= strlen(s1);
    int s2_sz= strlen(s2);

    printf("%d %d\n",s1_sz,s2_sz);
    printf("%s %s\n",s1,s2);
    
    return 0;
}

/* 

Amar ager code:

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len1=0,len2=0;
    char s1[10001],s2[10001];
    gets(s1);
    gets(s2);

    i=0;
    while(s1[i] !='\0')
    {
        len1++;
        i++;
    }

    j=0;
    while(s2[j] !='\0')
    {
        len2++;
        j++;
    }

    printf("%d %d\n",len1,len2);
    printf("%s %s\n",s1,s2);

    return 0;
}


*/