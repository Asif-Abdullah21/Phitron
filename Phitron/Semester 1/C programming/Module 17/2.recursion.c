#include<stdio.h>
void fun()
{
    printf("Fun\n");
    fun(); //infinity time run hotei thakbe jotokkhon na stack overflow hoye jay
}
int main()
{
    fun();
    return 0;
}