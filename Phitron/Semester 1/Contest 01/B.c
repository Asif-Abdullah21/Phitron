#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int j = 1; j <= t; j++)
    {
        int f = 0;
        int n;
        scanf("%d", &n);
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                printf("Case %d: %d\n", j, i+1);
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("Case %d: Not Found\n", j);
    }

    return 0;
}