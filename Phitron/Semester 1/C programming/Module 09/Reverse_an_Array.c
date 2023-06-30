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

    int i=0,j=n-1;

    while (i<j) // two poiner method use krlam
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
  
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}


// MY METHOD:

// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for (i = 0,j=n-1; i<n/2; i++,j--)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }