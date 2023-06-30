#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long l,r;
        scanf("%lld %lld",&l,&r);
        long long mx=0,mn=0;
        if(l>r)
        {
            mx = l;
            mn = r;
        }
        else{
            mx = r;
            mn = l; 
        }
        long long sum1 = (mx*(mx+1))/2;
        long long sum2 = (mn*(mn-1))/2;

        printf("%lld\n",sum1-sum2);
    }
    
    
    return 0;
}


// #include<stdio.h>

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while (t--)
//     {
//         long long l,r;
//         scanf("%lld %lld",&l,&r);
//         long long sum1 = (r*(r+1))/2;
//         long long sum2 = (l*(l-1))/2;

//         long long sum3 = (r*(r-1))/2;
//         long long sum4 = (l*(l+1))/2;

//         //if(l==1 && r==1) printf("1\n");
//         //else if(l==1 && r>1) printf("%lld\n",sum1);
//         if(r<l) printf("%lld\n",sum4-sum3);
//         else if(r>=l) printf("%lld\n",sum1-sum2);
//     }
    
    
//     return 0;
// }