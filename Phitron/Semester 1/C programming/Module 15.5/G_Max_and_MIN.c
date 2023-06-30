#include<stdio.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d",&n);
    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<mn) mn = a[i];
        if(a[i]>mx) mx = a[i];
    }

    printf("%d %d\n",mn,mx);
    
}

int main()
{
    
    solve();
    
    
    return 0;
} 

/*
#include<stdio.h>
#include<limits.h>

void solve(int *a,int n)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<mn) mn = a[i];
        if(a[i]>mx) mx = a[i];
    }

    printf("%d %d\n",mn,mx);
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    solve(a,n);
    
    
    return 0;
} */

/* Previous code:


#include <stdio.h>

void min_max(int a[],int n)
{
    int i,min,max;
    min = a[0];
    max = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]<=min) min = a[i];
        if(a[i]>=max) max = a[i];
    }

    printf("%d %d\n",min,max);
}

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min_max(a,n);

    return 0;
}


*/