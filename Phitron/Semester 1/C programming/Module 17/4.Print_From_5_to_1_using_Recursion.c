#include<stdio.h>
void fun(int i)
{
    // base case
    if(i==0) return;
    printf("%d\n",i);
    fun(i-1);
}
int main()
{
    fun(5);
    return 0;
}

//---------------------------------------------------------

// #include<stdio.h>

// void print(int n)
// {
//     //if(n==0) return;//base case
//     printf("%d\n",n);
//     if(n==1) return;//base case
//     print(n-1);
// }

// int main()
// {
//     int n=5;
//     print(n);
    
//     return 0;
// }