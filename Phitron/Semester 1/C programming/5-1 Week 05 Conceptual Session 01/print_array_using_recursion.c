#include<stdio.h>

void solve(int a[],int n)
{
    if(n<0) return;
    solve(a,n-1);
    printf("%d ",a[n]);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    solve(a,n-1);

    return 0;
}

/*

#include<stdio.h>

void solve(int a[],int n)
{
    if(n<0) return;
    printf("%d ",a[n]); // array reverse print
    solve(a,n-1);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    solve(a,n-1);

    return 0;
}

*/


/*

#include<stdio.h>

void solve(int a[],int n,int i)
{
    if(i==n) return;
    printf("%d ",a[i]);
    solve(a,n,++i);//solve(a,n,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    solve(a,n,0);

    return 0;
}



*/

