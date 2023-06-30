#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double n;
   // scanf("%lf",&n);
    n=3.5;

    int ans = ceil(n);
    printf("Ceil: %d\n",ans);

    ans = floor(n);
    printf("Floor: %d\n",ans);

    ans = round(n);//3.5 or greater than 3.5 ---> 4 else --> 3
    printf("Round: %d\n",ans);

    double val = 28.3;
    double x = sqrt(val);

    printf("Square-root: %.2lf\n",x);

    int a=3,b=4;
   // ans = ceil(pow(a,b));//125
    ans = pow(a*1.0,b*1.0);//81
    printf("Power: %d\n",ans);

    // x = pow(a*1.0,b*1.0);//125
    //printf("Power: %.0lf\n",x);

    // x = pow(a*1.0,b*1.0);//81
    //printf("Power: %.0lf\n",x);

    double aa=2.3,bb=3.5;

    x = pow(aa,bb);//81

    printf("Power: %.2lf\n",x);

    aa=5,bb=3;

    x = pow(aa,bb);//125 //it works perfectly on floating value

    printf("Power: %.0lf\n",x);
   
    int value = -44;
    ans = abs(value); //#include<stdlib.h>

    //long long hole -1 dara gun kore nite hbe if(val<0) val = val*-1;

    printf("abs(%d) = %d\n",value,ans);




    
    return 0;
}