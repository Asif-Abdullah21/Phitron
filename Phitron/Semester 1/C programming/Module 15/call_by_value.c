#include<stdio.h>

void fun(int x)
{
    x = 200;
    printf("Adress of x in fun function: %d\n",&x);
    printf("Value of x in fun function: %d\n",x);
}

int main()
{
    int x = 10;
    printf("Adress of x in main function: %d\n",&x); //adress is different from the fun function
    fun(x);
    printf("Value of x in main function: %d\n",x);
    
    return 0;
}