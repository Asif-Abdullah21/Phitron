#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s = n - 1, k = 1;

    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            k += 2;
            s--;
        }
       /* else if(i==n) 
        {
            k=k;
            s=s;
        }  */
        else if(i>n)
        {
            k -= 2;
            s++;
        }

        printf("\n");
    }

    return 0;
}



//--------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int s = n - 1, k = 1;

//     for (int i = 0; i < 2*n; i++)
//     {
//         for (int j = 0; j < s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < k; j++)
//         {
//             printf("*");
//         }

//         if (i < n-1)
//         {
//             k += 2;
//             s--;
//         }
//       /* else if(i==n-1) 
//         {
//             k=k;
//             s=s;
//         } */  
//         else if(i>=n)
//         {
//             k -= 2;
//             s++;
//         }

//         printf("\n");
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------//

//1st procedure:

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     int s=n-1,k=1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < k; j++)
//         {
//             printf("*");
//         }

//         k+=2;
//         s--;

//         printf("\n");
//     }

//      s=0,k=(2*n)-1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < k; j++)
//         {
//             printf("*");
//         }

//         k-=2;
//         s++;

//         printf("\n");
//     }

//     return 0;
// }