#include<stdio.h>

void print_it(int i)
{
    if(i==0) return;
    if(i>1) printf("%d ",i);
    else printf("%d",i);
    print_it(i-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    print_it(n);
    
    return 0;
}

/*
#include <stdio.h>
 
void fun(int i)
{
    if (i==0) return;
    if(i==1) printf("%d",i);  
    else   printf("%d ",i);
     
    fun(i-1);
   
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}

*/
