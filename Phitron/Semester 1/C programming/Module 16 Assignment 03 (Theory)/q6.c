#include<stdio.h>

void increment(int *n) // pointer variable for recieving adress of a variable
{
     *n = *n+1;
     printf("Value of n from increment function: %d\n",*n);
}

int main()
{
    int n;
    scanf("%d",&n);
    increment(&n);

    printf("\nAfter calling increment function:\n");
    printf("Value of n from main function: %d\n",n); //here value of n is changed by the function
    /* here value of n is changed by the increment function because we are passing the adress of n
    variable through the increment function. by derreferencin the pointer variable we can access the 
    value that has been stored at the adress of n or n variable which is a pointer,so here we are 
    changing the value directly to the adress, so if we change anywhere of the function it will 
    change the value, it doesn't matter in which scope the n variable is because we are accessing
    adress of the variable, so the value of the variable will be changed.
    it is the benifit of pass by reference function because we can change the value of a variable 
    from anywhere of our code.
    
    */
    
    return 0;
}


// #include<stdio.h>

// void increment(int n)
// {
//      n = n+1;
//      printf("Value of n from increment function: %d\n",n);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     increment(n);

//     printf("\nAfter calling increment function:\n");
//     printf("Value of n from main function: %d\n",n); //here value of n remains same as previous
//     /* here value of n remains same as previous because we are just passing a copy of the value 
//     through the function, two variables are completely different we can't change a value ny changing
//     another one because adress of both of the variables are different when we call the function by value.
//     It is an example of pass by value.
    
//     */
    
//     return 0;
// }