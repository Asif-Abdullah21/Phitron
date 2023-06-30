#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
   
    int f=1;
    for (int i = 0,j=strlen(s)-1; i < j; i++,j--)
    {
        if(s[i] != s[j])
        {
            f=0;
            break;
        }
    }
    
    if(f) printf("YES\n");
    
    else printf("NO\n");
    
    return 0;
}

/*phitron:
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int i=0,j=strlen(a)-1;
    int flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==0)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    return 0;
}
*/