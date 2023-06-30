#include <stdio.h>
// #include<stdlib.h> // header file of abs() function
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int p_sum = 0, s_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                p_sum += a[i][j];
            if (i + j == n - 1)
                s_sum += a[i][j];
        }
    }

    int ans = p_sum - s_sum;

    if (ans < 0)
        printf("%d\n", -1 * ans);
    else
        printf("%d\n", ans);

    return 0;
}

//-----------------------------------------------------------------
/*
#include<stdio.h>
//#include<stdlib.h> // header file of abs() function
int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int p_sum=0,s_sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j) p_sum += a[i][j];
            if(i+j==n-1) s_sum += a[i][j];
        }
    }

    int ans = p_sum-s_sum;

    if(ans<0) printf("%d\n",-1*ans);
    else printf("%d\n",ans);
  //  printf("%d",abs(ans));


    return 0;
}
*/

//------------------------------------------------------------------
/*My previous code:

#include<stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0;
    scanf("%d",&n);
    int A[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j) sum1 = sum1 + A[i][j];
        }
    }


    for(i=0,j=n-1;i<n;i++,j--)
    {
        sum2 = sum2 + A[i][j];
    }

    int ans = sum1-sum2;

    if(ans<0) printf("%d\n",ans*-1);
    else printf("%d\n",ans);



    return 0;
}


*/