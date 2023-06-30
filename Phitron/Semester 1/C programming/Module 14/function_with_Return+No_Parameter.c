#include<stdio.h>

int sum(void)//int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int s = a+b;

    return s;
}

int main()
{
    int ans = sum();

    printf("%d\n",ans);  
    
    return 0;
}