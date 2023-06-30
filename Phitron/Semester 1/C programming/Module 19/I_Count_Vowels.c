#include<stdio.h>
#include<string.h>

int cnt_vowel(char *str,int i)
{
    
    if(str[i]=='\0') return 0;
    int cnt = cnt_vowel(str,i+1);
    
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') return cnt+1;
    else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') return cnt+1;
    else return cnt;
}

int main()
{
    char str[201];
    fgets(str,201,stdin);

    int cnt = cnt_vowel(str,0);
    printf("%d\n",cnt);
    
    return 0;
}

/*Phitron's Code:

#include<stdio.h>

int fun(char s[],int i)
{
    // base case
    if(s[i]=='\0') 
    {
        return 0;
    }
    int ans=fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
    {
        return ans+1;
    }
    else 
    {
        return ans;
    }
}
int main()
{
    char s[205];
    fgets(s,205,stdin);
    int cnt=fun(s,0);
    printf("%d\n",cnt);
    return 0;
}


*/