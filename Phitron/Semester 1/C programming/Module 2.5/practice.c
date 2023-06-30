// #include<stdio.h>
// int main()
// {
//     printf("Recently I heard that you've achieved 95%% marks in your exam.\n");
//     printf("This is brilliant!\n"); 
//     printf("I wish you'll shine in your life!\tGood luck with all the barriers(/\\) in\nyour life.\n");
//     printf("\"Assalamu Alaikum\"\n");

//     printf("Alhamdulillah for everything\n");

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//    // float div = a*1.0/b;
//     printf("%d + %d = %d\n",a,b,a+b);
//     printf("%d - %d = %d\n",a,b,a-b);
//     printf("%d * %d = %d\n",a,b,a*b);
//     printf("%d / %d = %.2f\n",a,b,a*1.0/b);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==0) printf("even\n");
//     else printf("odd\n");

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n>0) printf("positive\n");
//     else if(n<0) printf("negative\n");
//     else printf("zero\n");

//     return 0;
// }



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=10000)
    {
        printf("Gucci Bag\n");
        if(n>20000) printf("Gucci Belt\n");
    }
    else if(n>=5000)
    printf("Levis Bag\n");
    else 
    printf("Something\n");

    return 0;
}