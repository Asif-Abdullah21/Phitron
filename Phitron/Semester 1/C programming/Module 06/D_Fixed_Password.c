#include<stdio.h>
int main()
{
    int n;

    while (scanf("%d",&n) != EOF)
    {
        if(n==1999) 
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int n;

    while (1)
    {
        scanf("%d",&n);
        if(n==1999) 
        {
            printf("Correct\n");
            return 0;
        }
        else{
            printf("Wrong\n");
        }
    }
    
    
    return 0;
}
*/