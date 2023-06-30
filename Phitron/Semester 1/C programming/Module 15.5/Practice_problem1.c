#include<stdio.h>

int my_abs(int n)
{
    if(n<0) return -1*n;
    else return n;
}

int main()
{
    
    int n;
    scanf("%d",&n);

    n = my_abs(n);

    printf("%d\n",n);
    return 0;
}