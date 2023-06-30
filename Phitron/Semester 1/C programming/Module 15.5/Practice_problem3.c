#include<stdio.h>

int my_odd(int *a,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 != 0) cnt++;
    }
    return cnt;
}

int main()
{
    
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int ans = my_odd(a,n);

    printf("%d\n",ans);
    

    return 0;
}
