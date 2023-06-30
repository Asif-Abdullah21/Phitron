#include<stdio.h>

void sum(int x,int y)
{
    int s=x+y;
    //return; program will end here
    printf("%d\n",s);
   // return; //ses a return deya r na thaka same
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    
    return 0;
}