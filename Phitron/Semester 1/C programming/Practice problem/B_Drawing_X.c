#include<stdio.h>
int main()

{
   int n;
   scanf("%d",&n);

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j && j==n/2) printf("X");
            else if(i==j) printf("\\");
            else if(j==n-i-1) printf("/");
            else printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}






// #include<stdio.h>
// int main()

// {
//    int n;
//    scanf("%d",&n);

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if(i==j && j==(n/2)+1) printf("X");
//             else if(i==j) printf("\\");
//             else if(j==(n-i)+1) printf("/");
//             else printf("*");
//         }

//         printf("\n");
        
//     }
    
//     return 0;
// }




// #include<stdio.h>
// int main()

// {
//    int n;
//    scanf("%d",&n);

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if(i==j && j!=(n/2)+1) printf("\\");
//             else if(i==j && j==(n/2)+1) printf("X");
//             else if(j==(n-i)+1) printf("/");
//             else printf("*");
//         }

//         printf("\n");
        
//     }
    
//     return 0;
// }



/*
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n); //muhammad_sayem
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j && i==n/2) printf("X");
            else if(i==j) printf("\\");
            else if(i+j == n-1) printf("/");
            else printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

*/
