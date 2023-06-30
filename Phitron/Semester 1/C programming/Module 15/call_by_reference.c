#include<stdio.h>

void fun(int *ptr)
{
     printf("ptr er value: %p\n",ptr);
    // printf("main er x er value: %d\n",*ptr);
    *ptr = 500;
    printf("main er x er value from fun function by de referrencing ptr: %d\n",*ptr);
}

int main()
{
    int x = 10;
    printf("x er adress: %p\n",&x);

    fun(&x);

    printf("value of x in main function: %d\n",x);
    
    return 0;
}