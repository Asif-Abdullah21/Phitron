// #include<stdio.h>
// int main()
// {
//     int a;
//     char c;
//     float f;
//     scanf("%d %c %f", &a,&c,&f);
//     printf("%d %c %.2f\n\n\n",a,c,f);

//     return 0;
// }

#include <stdio.h>
int main()
{
    
    // print 10% 20%

    // int a,b;
    // char p;

    // scanf("%d%c %d%c",&a,&p,&b,&p);
    // printf("%d%% %d%%",a,b);

    // int a,b;

    //  scanf("%d%% %d%%",&a,&b);
    //  printf("%d%% %d%%",a,b);

    //  printf("\n\n");
    //  scanf("%da %db",&a,&b);
    //  printf("%da %db",a,b);

    //  printf("\n\n");
    int a = 1000000000;
    long long int aa = 1000000000000000000;
    printf("%d\n", a);
    printf("%lld\n", aa);
    float ff = 22.123456789;
    double dd = 2.123456789123456;
    double ddd = 22.123456789123456;

    printf("%f\n", ff);
    printf("%.15lf\n", dd);
    printf("%.15lf", ddd);

    return 0;
}