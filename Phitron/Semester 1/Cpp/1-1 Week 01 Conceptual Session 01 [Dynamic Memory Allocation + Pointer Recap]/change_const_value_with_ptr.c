#include <stdio.h>

int main()
{

    const int num = 15; //const value normally change kora jay na but c te pointer diye change kora jay
    int* num_ptr =  &num; // c programming a eta kaj kore but cpp te kaj kre na

    *num_ptr = 5; //adress+* = adress a thaka value
    printf("%d",num);
    return 0;
}
