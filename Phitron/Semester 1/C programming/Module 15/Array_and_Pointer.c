#include<stdio.h>
int main()
{
    int a[5] ={1,2,3,4,5}; //a name ta 0th index er address //tahole a ke ekta pointer bola jay
    printf("0th index er adress: %p\n",&a[0]);
    printf("0th index er adress: %p\n",a);

    printf("0th index er value: %d\n",a[0]);
    printf("0th index er value: %d\n",*a); //int *a = &a[0];

    //array behind the scene pointer hisebe kaj kre
    printf("1th index er value: %d\n",*(a+1)); 
    printf("1th index er value: %d\n",*(1+a)); // behind the scene array evabe pointer hisebe kaj kre


    
    // a[1] -> *(a+1);
    // *(a+1) -> a[1];
    // *(1+a) -> 1[a] / a[1] ;
    printf("1th index er value: %d\n",a[1]); 
    printf("1th index er value: %d\n",1[a]); //jehetu behind the scene array evabe pointer hisebe kaj kre so *(a+1) and *(1+a) is same
    
    printf("3rd index er value: %d\n",3[a]);
    printf("3rd index er value: %d\n",*(3+a)); 

    
    return 0;
}


/*
    => ar mane holo 0-index er address je kotha, a print korao same kotha 
    => ar name ta holo ar[0] er address
    => ar jehetu ekta address rakhe tai bola jay ar ekta pointer
    => ar = &a[0] bola jay

    -muhammad_sayem
*/