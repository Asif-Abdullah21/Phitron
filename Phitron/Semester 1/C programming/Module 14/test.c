#include<stdio.h>
#include<math.h>
int main()
{
    int a=5,b=3;
   // ans = ceil(pow(a,b));//125
    double ans = pow(a*1.0,b*1.0);
    printf("Power: %.0lf\n",ans);
    
    return 0;
}