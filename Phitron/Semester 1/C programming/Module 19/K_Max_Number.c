#include<stdio.h>
#include<limits.h> //header file for INT_MIN

int max(int a[],int n,int i)
{
    if(i==n) return INT_MIN;
    int mx = max(a,n,i+1);
    if(a[i]>mx) return a[i];
    else return mx;
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

    int ans = max(a,n,0);
    printf("%d\n",ans);
    
    return 0;
}


/*
#include<stdio.h>

int max(int *a,int i)
{
    if(i==0) return a[i];
    int val = max(a,i-1);
    if(a[i]>val) return a[i];
    else return val;
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

    int ans = max(a,n-1);
    printf("%d\n",ans);
    
    return 0;
}

*/