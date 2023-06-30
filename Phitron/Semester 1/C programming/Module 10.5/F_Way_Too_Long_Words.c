#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        char str[101];
        scanf("%s",str);

        int len = strlen(str);

        if(len<=10) printf("%s\n",str);
        else
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
    }
    
    
    return 0;
}

/* 
#include<stdio.h>
int main()
{
    int i,test,j;
    scanf("%d",&test);
    char s[101];

    for(i=0; i<test; i++)
    {
        scanf("%s",s);
        int len=0;
        for(j=0; s[j] !='\0'; j++) len++;

        if(len<=10) printf("%s\n",s);

        else printf("%c%d%c\n",s[0],len-2,s[len-1]);
    }




    return 0;
}

*/