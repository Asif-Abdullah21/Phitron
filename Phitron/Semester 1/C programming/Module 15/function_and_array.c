#include<stdio.h>

void fun(int a[], int n) // or void fun(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    fun(a, 5);
    
    return 0;
}

//---------------------------------------------------------------

// #include<stdio.h>
// void fun(int *a, int sz){       
    
//     for(int i=0; i<sz; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<sz; i++){
//         printf("%d ", a[i]);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     fun(a,n);          
    
//     return 0;
// }

//-----------------------------------------------------------------------

/* #include<stdio.h>

void fun(int a[],int n)  // size recieve korar jonno size name er variable declare kora hoise ///
{
     for (int i = 0; i < n; i++)
     {
        printf("%d\n",a[i]);
     }
     a[2] = 600;
     
}

int main()
{
    int ar[5] = {10,20,30,40,50};
    int n = sizeof(ar)/sizeof(int);

    fun(ar,n); //array name , array size


    printf("\n\narray after changing in fun functiong:\n\n");
     for (int i = 0; i < n; i++)
     {
        printf("%d\n",ar[i]);
     }
    
    return 0;
} */

//----------------------------------------------------------------


/*
#include<stdio.h>
void fun(double a[], int n){
    for(int i=0; i<n; i++){
        printf("%0.2lf ", a[i]);
    }
}
int main()
{
    double a[5] = {10.3, 20.2, 30.2, 40.6, 50.8};
    fun(a, 5);
    
    return 0;
}
*/
