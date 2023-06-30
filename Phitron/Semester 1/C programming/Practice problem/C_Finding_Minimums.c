#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k,x,mn = INT_MAX;
    scanf("%d %d",&n,&k);
   
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        if(x<mn) mn = x;
        if(i%k==0)
        {
            printf("%d ",mn);
            mn = INT_MAX;
        }
        else if(i==n)
        {
            printf("%d",mn);
        }
    }
    
    
    
    return 0;
}