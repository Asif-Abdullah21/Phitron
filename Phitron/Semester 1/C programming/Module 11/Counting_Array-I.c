#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int cnt[10]={0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        //cnt[a[i]]++;
       // int val = a[i];
      //  cnt[val]++;
    }

    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
        //int val = a[i];
       // cnt[val]++; 
    }

    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    
    return 0;
}


//alt + shift + lower key dile ek line nicher line a copy hbe
//cntrl + alt + lower key dile eksathe koyekta line select kora jay

