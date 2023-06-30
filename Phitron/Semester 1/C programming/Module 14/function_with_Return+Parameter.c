#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;

    return sum; // eitar data type e hobe function er data type/return type
}
// int sum(int x,int y); declaration of a function, it needs when we make a function below the main function

int main()
{

    // int ans = sum(10,20);

    // printf("SUM = %d\n",ans);
    // int a,b;
    int x, y;
    scanf("%d %d", &x, &y);

    printf("SUM = %d\n", sum(x, y));
    printf("SUM = %d\n", sum(20, 30));

    return 0;
}

// int sum(int x,int y)
// {
//     int sum = x+y;

//     return sum;//eitar data type e hobe function er data type/return type
// }
