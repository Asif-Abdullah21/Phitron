#include <stdio.h>
int main()
{
    long long e, m, b, cnt = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e <= m && e <= b) cnt = e;
        
    else if (m <= e && m <= b) cnt = m;
        
    else if (b <= m && b <= e) cnt = b;
    
    e -= cnt;
    b -= cnt;
    m -= cnt;

    e = e / 2;

    if (e <= b) cnt += e;
    else cnt += b;

    printf("%lld\n", cnt);

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     long long e,m,b,cnt=0;
//     scanf("%lld %lld %lld",&e,&m,&b);

//     if(e>0 && m>0 && b>0)
//     {
//         if(e<=m && e<=b) cnt = e;
//         else if(m<=e && m<=b) cnt = m;
//         else if(b<=m && b<=e) cnt = b;

//         e -= cnt;
//         b -= cnt;
//         m -= cnt;
//     }

//     e = e/2;
//     if(e>0 && b>0)
//     {
//         if(e<=b) cnt += e;
//         else cnt += b;
//     }

//     printf("%lld\n",cnt);

//     return 0;
// }

/*
#include<stdio.h>
int main()
{
    long long e,m,b,cnt=0;
    scanf("%lld %lld %lld",&e,&m,&b);

    if(e>0 && m>0 && b>0)
    {
        if(e<=m && e<=b) cnt += e;
        else if(m<=e && m<=b) cnt += m;
        else if(b<=m && b<=e) cnt += b;

        e -= cnt;
        b -= cnt;
        m -= cnt;
    }

    if(e>1 && b>0)
    {
        e=e/2;

        if(e<=b) cnt += e;
        else cnt += b;
    }


    printf("%lld\n",cnt);

    return 0;
}
*/