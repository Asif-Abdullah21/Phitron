#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int cnt=0;
    for (int i = 0, j = n - 1; i<=j;) //    for (int i = 0, j = n - 1; cnt<n;)
    {
        if (cnt % 2 == 0)
        {
            printf("%d ", a[i]);
            i++;
        }
        else
        {
            printf("%d ", a[j]);
            j--;
        }
        cnt++;
    }

    return 0;
}