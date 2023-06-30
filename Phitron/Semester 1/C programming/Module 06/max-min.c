#include<stdio.h>
#include<limits.h>
int main()
{
    int max = INT_MIN, min = INT_MAX,n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int val;
        scanf("%d",&val);
        if(val>max) max = val;
        if(val<min) min = val;
    }

    printf("%d %d\n",min,max);
    
    return 0;
}