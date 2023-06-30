#include<stdio.h>

int main()
{
    long long n,x,mx=0;
    scanf("%lld",&n);
    for (long long i = 0; i < n; i++)
    {
        long long cnt=0;
        scanf("%lld",&x);
        while (x%2==0)
        {
            cnt++;
            x=x/2;
        }
        if(cnt>=mx) mx = cnt;
    }

    printf("%lld\n",mx);

    return 0;
}


/* With function:

#include <stdio.h>

int call(long long x)
{   
    int cnt=0;
    while (x % 2 == 0)
    {
        cnt++;
        x = x / 2;
    }
    return cnt;
}

int main()
{
    int n,mx = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);

        if (call(x) >= mx)   mx = call(x);
          
    }

    printf("%d\n", mx);

    return 0;
}

*/


//-----------------------------------------------


