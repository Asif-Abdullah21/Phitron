#include<stdio.h>

void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d\n",a+b);
}

int main()
{
    solve();
}

//--------------------------------------------------------------------

// #include<stdio.h>

// long long add(int a,int b)
// {
//     return a+b;
// }

// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     long long sum = add(a,b);

//     printf("%d\n",sum);
    
//     return 0;
// }

/* previous code: 

#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    int ans = add(a,b);
    
    printf("%d\n",ans);
    
    return 0;
}


*/