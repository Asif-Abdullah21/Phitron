#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int pos1,pos2;
        scanf("%d %d",&pos1,&pos2);

        int temp = a[pos1];
        a[pos1] = a[pos2];
        a[pos2] = temp;
    }
    /*
    7
    9 1 17 3 5 2 7
    4
    1 3
    9 3 17 1 5 2 7
    2 4
    9 3 5 1 17 2 7
    5 3
    9 3 5 2 17 1 7
    4 6
    9 3 5 2 7 1 17

    */


    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

