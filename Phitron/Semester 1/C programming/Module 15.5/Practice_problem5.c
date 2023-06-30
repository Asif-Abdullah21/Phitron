#include<stdio.h>

int swap(int * n1,int * n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
}

int main()
{
    
    int a,b;
    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("%d %d\n",a,b);
    return 0;
}