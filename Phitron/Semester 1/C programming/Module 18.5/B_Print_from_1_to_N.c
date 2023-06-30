#include<stdio.h>

void print_it(int i)
{
    if(i==0) return;
    print_it(i-1); // here waiting
    printf("%d\n",i); //then reverse back and print 1 2 3 4 5
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n);
    
    return 0;
}


/* First code:
#include<stdio.h>

void print_it(int n,int i)
{
    if(i==n+1) return;
    printf("%d\n",i);
    print_it(n,i+1);
   
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n,1);
    
    return 0;
}

*/