#include<stdio.h>

void print(int i)
{
    if(i==6) return;
    print(i+1); // 5 4 3 2 // recursion age call korle r pore print/kaj korle recursion reverse a kaj kre
    printf("%d ",i); //1
}

int main()
{
    print(1);
    
    return 0;
}