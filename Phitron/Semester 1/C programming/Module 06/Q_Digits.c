#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i=1;i<=t;i++)
    {
        int n;
        scanf("%d", &n);

        do{
            printf("%d ",n%10);
            n = n/10;
        }while (n!=0);

        printf("\n"); 
   
    }

    return 0;
}

/*
#include <stdio.h>
int main()
{
    int n,rem;
    scanf("%d", &n);

    while (n--)
    {
        long long int val;
        scanf("%lld", &val);

        if (val == 0)
            printf("0\n");
        else
        {

            while (val > 0)
            {
                rem = val % 10;
                printf("%d ", rem);
                val = val / 10;
            }
            printf("\n");

        }
             
   
    }

    return 0;
}
*/