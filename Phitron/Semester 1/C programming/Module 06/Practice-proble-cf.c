//B. Even Numbers

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n==1) printf("-1\n");
    else
    {
        for (int  i = 2; i <= n; i++)
        {
            if(i%2==0) printf("%d\n",i);
        }
        
    }
    
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n,even=0,odd=0,pos=0,neg=0;
//     scanf("%d",&n);

//     for(int i=0;i<n;i++)
//     {
//         int val;
//         scanf("%d",&val);

//         if(val%2==0) even++;
//         if(val%2!=0) odd++;
//         if(val%2>0) pos++;
//         if(val%2<0) neg++;
//     }

//     printf("Even: %d\n",even);
//     printf("Odd: %d\n",odd);
//     printf("Positive: %d\n",pos);
//     printf("Negative: %d\n",neg);
    
//     return 0;
// }