// //Problem 1:

// #include<stdio.h>
// int main()
// {
//     printf("I Love Practice\n");
//     return 0;
// }

// //Problem 2:

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a+b;
//     printf("%d\n",sum);
//     return 0;
// }

// //Problem 3:

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     printf("I Love Practice\n");
//     return 0;
// }



// // //Problem 4:

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {


//     int A;
//     long long int B;
//     float C;
//     char D;

//     scanf("%d %lld %f %c",&A,&B,&C,&D);
//     printf("%d\",A);
//     printf("%lld\",B);
//     printf("%0.2f\",C);
//     printf("%c\",D);
//     return 0;
// }
//-------------------------------

// #include<stdio.h>
// int main()
// {
//     int a;
//     long long int b;
//     double d;
//     char ch;

//     scanf("%d",&a);
//     scanf("%lld",&b);
//     scanf("%lf",&d);
//     getchar();
//     scanf("%c",&ch);

//     printf("%d\n",a);
//     printf("%lld\n",b);
//     printf("%.2lf\n",d);
//     printf("%c\n",ch);
//     return 0;
// }

//------------------------------

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {


//     int a;
//     long long b;
//     float f;
//     char ch;

//     scanf("%d %lld %f %c",&a,&b,&f,&ch);
//     printf("%d\n%lld\n%.2f\n%c\n",a,b,f,ch);
  
// }

//----------------------------------------

#include<stdio.h>
int main()
{
    int a;
    long long int b;
    double d;
    char ch;

    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%lf",&d);
    scanf("\n%c",&ch);//shudhu %c dile enter re %c mone krbe

    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.2lf\n",d);
    printf("%c\n",ch);
    return 0;
}

// // //Problem 5:

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         if(i%5==0) printf("%d Yes\n",i);
//         else printf("%d No\n",i);
//     }
// }
