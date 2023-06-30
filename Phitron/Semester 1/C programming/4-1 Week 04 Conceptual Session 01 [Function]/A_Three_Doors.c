#include<stdio.h> 

void solve(void)
{
    
        int key,f=1; //concept from our instructor
        scanf("%d",&key);

        int a[5];
        for (int i = 1; i <= 3; i++)
        {
            scanf("%d",&a[i]);
        }

        if(a[key]==0)
        {
            printf("NO\n");
            return;
        }
        int val = a[a[key]];
        if(val==0)
        {
            printf("NO\n");
            return;
        }

        printf("YES\n");
    
}


int main()
{
    int test;
    scanf("%d",&test);
    while (test--)
    {  
        solve();
    }   
    
    return 0;
}

/*

// https://codeforces.com/problemset/problem/1709/A


#include<stdio.h>
void solve(){
    int key;
    scanf("%d",&key);
    int arr[5];

    for(int i=1;i<=3;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[key]==0){
        printf("NO\n");
        return;
    }
    key = arr[key];

    if(arr[key]==0){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main(){
    int test;
    scanf("%d",&test); //code of our instructor
    while(test--){
        solve();
    }              
    return 0;
}


*/

/* MY solve:
#include<stdio.h>

void solve(void)
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int key,f=0;
        scanf("%d",&key);

        int a[5];
        for (int i = 1; i <= 3; i++)
        {
            scanf("%d",&a[i]);
        }

        if(a[key]>=1 && a[key]<=3)
        {
            int val = a[key];
            if(a[val]>=1 && a[val]<=3)
            {
                f=1;
            }
        }

        

        if(f) printf("YES\n");
        else printf("NO\n");
    }
}


int main()
{
    solve();
    
    return 0;
}

*/

/*
#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test; //muhammad_sayem

    while(test--){
        int x;
        cin >> x;
        int a[4], i, cnt = 0;

        for(i=1; i<=3; i++){
            cin >> a[i];
        }

        if(a[x] != 0) {
            cnt++;
            if(a[a[x]] != 0) cnt++;
        }

        if(cnt == 2) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}

*/