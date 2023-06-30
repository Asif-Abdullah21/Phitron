#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a+b-c==d) printf("YES\n");
    else if(a+b*c==d) printf("YES\n");
    else if(a-b+c==d) printf("YES\n");
    else if(a-b*c==d) printf("YES\n");
    else if(a*b+c==d) printf("YES\n");
    else if(a*b-c==d) printf("YES\n");
    else printf("NO\n");
    return 0;
}

/* 
#include <stdio.h>

int main() {
    long long a,b,c,d;
    int count=0;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    
    if(a+b-c==d) count++;
    else if(a+b*c==d) count++;
    else if(a-b+c==d) count++;
    else if(a-b*c==d) count++;
    else if(a*b+c==d) count++;
    else if(a*b-c==d) count++;
   
    if(count==0) printf("NO\n");
    else printf("YES\n");
    return 0;
}
*/