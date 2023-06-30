#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]==a[i]+1)
            {
                cnt++;
                break;
            }
        }
        
    }

    printf("%d\n",cnt);
    
    
    
    return 0;
}