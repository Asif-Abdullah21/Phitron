#include<stdio.h>
long long int solve(int a[],int i){

   // if(i<0) return 0;
    if(i==0) return a[i];
    long long ans = solve(a,i-1); // n = 4 3 2 1 0 then sum er somoy 0 1 2 3 4
    return ans+a[i];
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%lld\n",solve(a,n-1));

    return 0;
}


