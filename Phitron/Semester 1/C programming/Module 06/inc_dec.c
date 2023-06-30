#include<stdio.h>
int main()
{
    int i=10,j=10;

    int x = i++;
    printf("X= %d, i= %d\n",x,i);
    
    int y = ++j;
    printf("y= %d, j= %d\n",y,j);

    i=10,j=10;
    
     x = i--;
    printf("X= %d, i= %d\n",x,i);
    
     y = --j;
    printf("y= %d, j= %d\n",y,j);
    
    
    return 0;
}