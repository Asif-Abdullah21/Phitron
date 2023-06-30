#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a,cnt[100001]={0};//cnt[m+1] doesn't works;//size variable thkle sob gulate direct initilize kora jbe na

    for(int i=0;i<n;i++)
    {
         scanf("%d",&a);
         cnt[a]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1],cnt[100001]={0};//cnt[m+1] doesn't works;//r ekta way loop chaliye sob 0 kore deya

    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         cnt[a[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
}



*/