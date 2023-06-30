#include<stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);

    int a[n1];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int n2;
    scanf("%d",&n2);

    int b[n2];

    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }

    int n= n1+n2;
    int final_arr[n];

    for (int i = 0; i < n1; i++)
    {
        final_arr[i] = a[i];
    }
    
    int i=n1;
    for (int j = 0; j < n2; j++)
    {
        final_arr[i] = b[j];
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",final_arr[i]);
    }
    
    printf("%d",a[20]);
    
    return 0;
}