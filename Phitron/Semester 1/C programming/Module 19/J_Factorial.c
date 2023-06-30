#include<stdio.h>
long long int fact(long long int n)  //phitron's code//
{
    // base case
    if(n==0)
    {
        return 1;
    }
    long long int ans=fact(n-1);
    return ans*n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ans=fact(n);
    printf("%lld",ans);
    return 0;
}


/*
#include<stdio.h>
long long fact(int n)
{
    if(n==0) return 1; //factorial of 0 is 1
   //long long ans = fact(n-1);
    return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long ans = fact(n);
    printf("%lld\n",ans);
    
    return 0;
}

*/