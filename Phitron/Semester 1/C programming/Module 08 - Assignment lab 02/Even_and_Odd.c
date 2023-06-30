#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    long long even=0,odd=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0) even += a[i];
        else odd += a[i];
    }

    printf("%lld %lld\n",even,odd);
    
    
    return 0;
}