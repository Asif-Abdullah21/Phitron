#include<stdio.h>

void print(int i)
{
    if(i==6) return; // base case(where to stop the recursion)
    printf("%d\n",i);
    //if(i==5) return;
    print(i+1);
}

int main()
{
    print(1);
    
    return 0;
}