#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int space = n-1,value=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++)
        {
            printf("%d",i);
        }

        space--;
        value++;
         
        printf("\n");
    }
    
    return 0;
}