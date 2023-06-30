#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x,f=0;
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
            f=1;
            printf("%d",i);
            break;
        }
    }

    if(f==0) printf("-1\n");

    
    return 0;
}