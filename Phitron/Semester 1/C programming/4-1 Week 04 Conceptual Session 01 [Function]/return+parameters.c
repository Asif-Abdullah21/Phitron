#include <stdio.h>

int extract_sum(int n) //code of insturctor
{
    int firstNum = n / 1000;
    int lastNum = n % 10;
    return firstNum + lastNum;
}

// int first_digit(int n)
// {
//     int rem = 0;
//      while(n)
//      {
//         rem = n%10;
//         n/=10;
//      }

//      return rem;
// }
int main()
{
    int num;
    scanf("%d", &num);
    int result = extract_sum(num);
    printf("%d\n",result);
    // int last = first_digit(num);
    // printf("last digit: %d\n",last);
    return 0;
}