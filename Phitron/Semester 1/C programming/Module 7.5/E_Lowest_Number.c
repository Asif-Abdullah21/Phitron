#include<stdio.h>
#include<limits.h>
int main()
{
    int n,minimum= INT_MAX,position=0;
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<minimum)
        {
            minimum = a[i];
            position = i+1;
        }
    }

    printf("%d %d\n",minimum,position);

    
    
    return 0;
}