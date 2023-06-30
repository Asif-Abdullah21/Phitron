#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        //line stars here
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        //line ends here

        if (i < n)
        {
            s--;
            k += 2;
        }
        else 
        {
            s++;
            k-=2;
        }

        printf("\n");
    }

    return 0;
}

//---------------------------------------------------------------------------------
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;

    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k+=2;
        printf("\n");

    }


    s = 0,k=(n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s++;
        k-=2;
        printf("\n");

    }

    return 0;
}
*/

//---------------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int s=n-1,k=1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }

//         s--;
//         k+=2;
//         printf("\n");

//     }

//     s = 1,k=((n-1)*2)-1;
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }

//         s++;
//         k-=2;
//         printf("\n");

//     }

//     return 0;
// }