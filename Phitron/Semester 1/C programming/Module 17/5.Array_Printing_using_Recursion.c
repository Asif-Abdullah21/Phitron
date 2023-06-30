#include<stdio.h>

void print(int a[],int n,int i)
{
     if(i==n) return; //base case
     printf("%d ",a[i]);
     print(a,n,i+1);
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
    print(a,n,0);
    
    
    
    return 0;
}