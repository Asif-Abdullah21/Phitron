#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    if((a*b)%c!=0) printf("double\n");
    else{

        long long ans = (a*b)/c;

        if(ans <=2147483647)
        {
            printf("int\n");
        }
        else printf("long long\n");
    }
    
    return 0;
}

//---------------youtube---------------------

// #include<stdio.h>
// int main()
// {
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);

//     double ans1 = (a*b)/c;
//     long long ans2 = ans1;

//     double result = ans1 - ans2;

//     if(result>0) printf("double\n");
//     else if(ans2 <=2147483647) printf("int\n");
//     else printf("long long\n");
    
    
//     return 0;
// }

