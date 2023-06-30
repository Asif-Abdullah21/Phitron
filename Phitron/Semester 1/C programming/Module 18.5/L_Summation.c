#include <stdio.h>
long long sum(long long a[], int n, int i)
{

    if (i == n)
        return 0;
    long long ans = sum(a, n, i + 1); // last a giye amra ans 0 paisi
    ans += a[i];                      // i = 3 2 1 0
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long ans = sum(a, n, 0);

    printf("%lld\n", ans);

    return 0;
}

//------------------------------------------------------------------------

// #include <stdio.h>
// long long sum(long long a[], int n, int i)
// {

//     if (i == n)
//         return 0;
//     long long ans = sum(a, n, i + 1);

//     return ans + a[i];
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }

//     long long ans = sum(a, n, 0);

//     printf("%lld\n", ans);

//     return 0;
// }

/*
Author: Avijit_Chowdhury
// link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define int long long
int func(int a[],int i,int n){
    if(i==n){
        return 0;
    }

    int cnt=func(a,i+1,n);
    cnt+=a[i];
    return cnt;

}
int main(){
int n;
scanf("%lld",&n);
int a[n];
for(int i=0;i<n;i++){scanf("%lld",&a[i]);}

int cnt=func(a,0,n);
printf("%lld",cnt);
return 0;
}

*/

/*
AsifMohammedSifat vai:

#include<stdio.h>
long long int solve(int arr[],int size){
    //if(size<0) return 0;
    if(size==0) return arr[0];
    return arr[size] + solve(arr,size-1);
}
int main(){
    int sz;
    scanf("%d",&sz);
    int arr[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    printf("%lld\n",solve(arr,sz-1));

    return 0;
}

*/