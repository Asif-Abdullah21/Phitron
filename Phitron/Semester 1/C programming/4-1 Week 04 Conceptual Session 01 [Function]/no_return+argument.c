#include <stdio.h>

void print_it(int n) 
{
    if(n>0)
    {
        for(int i=n;i>=-n;i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=n;i<=-1*n;i++)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    print_it(num);
   
    return 0;
}