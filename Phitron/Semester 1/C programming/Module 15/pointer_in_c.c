// #include<stdio.h>
// int main()
// {
//     int x = 100;

//     int * ptr = &x;

//     printf("x er address: %p\n",&x);
//     printf("ptr er value: %p\n",ptr); // 
//     printf("ptr er address: %p\n",&ptr);
//     printf("ptr er memery size(byte): %d\n",sizeof(ptr));
    
//     return 0;
// }

//--------------------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int x = 100;

//     int * ptr = &x;

//     x = 200; // or *ptr = 200; // ekta change korlei 2 ta change hoye jbe // jehetu ptr pointer ta x ke point kortese

//     printf("x er value: %d\n",x);
//     printf("x er value: %d\n",*ptr); // *ptr diye derefference kora holo
    
    
//     return 0;
// }

//--------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
    double x = 5.26;

    double * ptr = &x;
    double * ptr2 = ptr;// mane x er adress rakhtesi(jeta x ptr er value) ptr2 te

    *ptr2 = 10.45; //ptr = 10.45;

    printf("x er value: %0.2lf\n",x);
    printf("x er value: %0.2lf\n",*ptr); 
    printf("x er value: %0.2lf\n",*ptr2); 
    printf("ptr er memery size(byte): %d\n",sizeof(ptr));
    
    return 0;
}