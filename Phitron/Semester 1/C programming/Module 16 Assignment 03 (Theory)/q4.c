// #include<stdio.h>

// void square(void)
// {
//     int n;
//     scanf("%d",&n);
//     printf("Square of %d is: %d\n",n,n*n);
// }

// int main()
// {

//     square();
    
//     return 0;
// }


// #include<stdio.h>


// int multiple() //return + no parameter
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     return a*b;
// }


// int main()
// {
//     int ans = multiple();


//     printf("multiple of these two number is: %d\n",ans);
   
//     return 0;
// }


// #include<stdio.h>

// int square()
// {
//     int n;
//     scanf("%d",&n);
//     return n*n;
// }

// int main()
// {
//     int ans = square();

//     printf("Square of the number is: %d\n",ans);
    
//     return 0;
// }

/*
#include<stdio.h>

int square(int n)
{
    return n*n;
}

int main()
{
    int n;
    scanf("%d",&n);

    int ans = square(n);

    printf("Square of %d is: %d\n",n,ans);
    
    return 0;
}

*/

#include<stdio.h>




// void cube(int n) //no return + parameter
// {
//     printf("Cube of %d is: %d\n",n,n*n*n);
// }


// int main()
// {
//     int n;
//     scanf("%d",&n);
//     cube(n);
   
//     return 0;
// }

#include<stdio.h>


void multiplication_table(void) ///no return + no parameter
{
    int n;
    scanf("%d",&n);
    printf("MUltiplication table:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d = %d\n",n,i,n*i);
    }
    
}


int main()
{
    multiplication_table();
   
    return 0;
}

