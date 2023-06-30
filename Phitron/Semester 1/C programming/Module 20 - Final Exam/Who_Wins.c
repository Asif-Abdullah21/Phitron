#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=0,p=0;

    while (n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a>b) t++;
        else if(b>a) p++;
    }

    if(t>p) printf("Tiger\n");
    else if(t<p) printf("Pathan\n");
    else printf("Draw\n");
    
    
    return 0;
}