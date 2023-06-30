#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int pos,val;

    printf("Enter the position(index) that you want to add value: ");
    scanf("%d",&pos);
    
    printf("\nEnter the value: ");
    scanf("%d",&val);
    
    for (int i = n; i >= pos+1; i--)
    {
        a[i] = a[i-1];
    }

    a[pos] = val;
        
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }

    
    
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     int a[n+1];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     int pos,val;

//     printf("Enter the position: ");
//     scanf("%d",&pos);
    
//     printf("\nEnter the value: ");
//     scanf("%d",&val);
    
//     for (int i = n; i >= pos; i--)
//     {
//         a[i] = a[i-1];
//     }

//     a[pos-1] = val;
        
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d ",a[i]);
//     }

    
    
//     return 0;
// }