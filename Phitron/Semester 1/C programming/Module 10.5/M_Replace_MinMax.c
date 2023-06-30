#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max = INT_MIN, min= INT_MAX,max_i,min_i;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<min) 
        {
            min = a[i];
            min_i = i;
        }
        if(a[i]>max)
        {
            max = a[i];
            max_i = i;
        }
    }

    a[min_i] = max;
    a[max_i] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
    
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    int max,min,max_index,min_index;

    for(i=0;i<n;i++) scanf("%d",&a[i]);
    max = a[0];
    min = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            min_index = i;
        }
        if(a[i]>max)
        {
            max = a[i];
            max_index = i;
        }
    }

    a[min_index] = max;
    a[max_index] = min;

    for(i=0;i<n;i++) printf("%d ",a[i]);



    return 0;
}

*/