#include<stdio.h>

int count_before_zero(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0) return i;
    }
    return n;
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int ans = count_before_zero(a,n);

    printf("%d\n",ans);

    return 0;
}