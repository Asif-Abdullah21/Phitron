// Online C compiler to run C program online
#include <stdio.h>
int count_digit(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count_digit(n / 10);
   }
}

int main() {
    // Write C code here

    int cnt = count_digit(1234);
    printf("%d\n",cnt);

    return 0;
}