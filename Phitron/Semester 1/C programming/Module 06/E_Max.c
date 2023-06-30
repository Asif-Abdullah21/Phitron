#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int val;
        scanf("%d",&val);
        if(val>=max) max = val;
    }

    printf("%d\n",max);
    
    return 0;
}