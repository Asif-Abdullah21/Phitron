#include<stdio.h>
int fun(char s[],int i)
{
    if(s[i]=='\0') return 0;
    int len=fun(s,i+1);
    return len+1;
}
int main()
{
    char s[6]="hello";
    int length=fun(s,0);
    printf("%d\n",length);
    return 0;
}




// #include<stdio.h>
// int string_len(char str[],int i)
// {
//     if(str[i]=='\0') return i;
//     string_len(str,i+1);
// }
// int main()
// {
//     char str[101];
//     scanf("%s",str);

//     int len = string_len(str,0);
//     printf("Length: %d\n",len);
    
//     return 0;
// }