// //problem 1

// // #include<stdio.h> 
// // int main()
// // {
// //     printf("Hello, world! I am learning C programming language. ^_^\n");
// //     printf("Programming is fun and challenging. /\\/\\/\\\n");
// //     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");

// //     return 0;
// // }


// // //problem 2:
// // #include<stdio.h>
// // int main()
// // {
// //     long long a,b;
// //     scanf("%lld %lld",&a,&b);

// //     long long ans = a*b;

// //     printf("%lld\n",ans);

// //     return 0;
// // }

// //-----------------------------------

// //problem 3:
// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);

// //     if(n%3==0) printf("YES\n");
// //     else printf("NO\n");

// //     return 0;
// // }


// //-----------------------------------

// //problem 4:
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 21; i <=n; i++)
//     {
//          if(i%3==0 && i%7==0) printf("%d\n",i);
//     }
    

//     return 0;
// }

// //-----------------------------------

//problem 5:
#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    if(n>1000)
    {
        printf("I will buy Punjabi\n");
        n-=1000;
        if(n>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else printf("Bad luck!\n");
    

    return 0;
}

