//function gulo kon serial a kaj krbe seta hocche call stack
    
#include<stdio.h>
void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}
int main()
{
    printf("Main Start\n");
    hello();
    printf("Main End\n");
    return 0;
}