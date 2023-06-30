#include<stdio.h>

void print_it(int n)
{
    if(n==0) return;
    printf("I love Recursion\n");
    print_it(n-1); //or print_it(--n); it will work perfectly
   //print_it(n--); dile kaj korbe na, karon value porer bar komabe, ekhetre always solve(n) e call jabe ja kokhono base case er sathe milbe na
   
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n);
    
    return 0;
}


//-----------------------------------------------------------

// #include<stdio.h>

// void print_it(int n,int i)
// {
//     if(i==n) return;
//     printf("I love Recursion\n");
//     print_it(n,i+1);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     print_it(n,0);
    
//     return 0;
// }



