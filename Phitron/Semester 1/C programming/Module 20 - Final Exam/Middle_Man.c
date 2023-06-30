#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+5];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if(a[j]<a[i]) 
            {
                int t=a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    if(n%2 != 0) printf("%d\n",a[(n+1)/2]);
    else printf("%d %d\n",a[n/2],a[(n/2)+1]);
    
    
   
    
    return 0;
}