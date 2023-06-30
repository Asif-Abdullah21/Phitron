#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(1)
    {
        int rem = a%b;
        if(rem==0) return b;
        a=b;
        b=rem;
    }
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << gcd(a,b)<< endl;

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int ans=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0) ans = i;
    }

    return ans;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << gcd(a,b)<< endl;

    return 0;
}


 */
