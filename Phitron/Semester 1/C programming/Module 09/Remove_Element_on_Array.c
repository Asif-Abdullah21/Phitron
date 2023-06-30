#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int pos;

    printf("Enter the position(index) of the value for delete: ");
    scanf("%d",&pos);
    
    for (int i = pos; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
           
    for (int i = 0; i < n-1; i++)
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
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     int pos;

//     printf("Enter the position of the value for delete: ");
//     scanf("%d",&pos);
    
//     for (int i = pos-1; i < n-1; i++)
//     {
//         a[i] = a[i+1];
//     }
           
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
//     return 0;
// }
