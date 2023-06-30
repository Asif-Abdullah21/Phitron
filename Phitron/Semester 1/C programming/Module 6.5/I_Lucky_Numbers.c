#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int x=n%10;
    n=n/10;

    if(x%n==0 || n%x==0) printf("YES\n");
    else printf("NO\n");

    
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     int a=n%10;
//     n=n/10;
//     int b=n%10;

//     if(a%b==0 || b%a==0) printf("YES\n");
//     else printf("NO\n");

    
//     return 0;
// }