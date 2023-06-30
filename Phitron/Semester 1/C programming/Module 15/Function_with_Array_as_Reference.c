#include<stdio.h>

void fun(int *a,int n)  // or void fun(int a[],int n)  //passing array works like a pointer
{
     a[2] = 600; //*(a+2) = 600
}

int main()
{
    int ar[5] = {10,20,30,40,50};

    fun(ar,5); //array name , array size 


    printf("\n\narray after changing in fun functiong:\n\n");
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",ar[i]); //10 20 600 40 50
     }
    
    return 0;
} 

// ------------------------------------------------------------ //

/*
#include<stdio.h>

void fun(char *s) // or void fun(char s[])
{         
    s[0] = 'G';
}

int main()
{
    char str[20] = "Hello";
    fun(str);
    printf("%s\n", str);    // output: Gello 
    
    return 0;
}
*/