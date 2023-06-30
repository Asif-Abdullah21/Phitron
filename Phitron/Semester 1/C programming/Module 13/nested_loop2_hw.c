/*
 
*****
 ***
  *

*/

#include<stdio.h>
int main()
{
    int n,k,space;
    scanf("%d",&n);

    space=0,k=(n*2)-1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        //A single line is finished here

        k=k-2;
        space++;
        printf("\n");
    }
    
    return 0;
}