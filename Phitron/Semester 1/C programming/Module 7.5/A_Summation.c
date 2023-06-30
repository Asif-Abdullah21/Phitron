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

    long long sum =0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if(sum<0) printf("%lld\n",-1*sum);
    else printf("%lld\n",sum);

    
    
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long int a[n],sum=0,i;
//     for(i=0; i<n; i++)
//     {
//         scanf("%lld",&a[i]);
//         sum = sum + a[i];
//     }

//     if(sum<0) printf("%lld\n",-1*sum);
//     else printf("%lld\n",sum);


//     return 0;
// }
