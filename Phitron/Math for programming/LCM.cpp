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

    int GCD = gcd(a,b);
    int LCM = (a/GCD)*b;//    ll LCM = (a*b)/GCD;


    cout << LCM << endl;

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    int i = 1;
    while(1)
    {
        if(i%a==0 && i%b==0) return i;
        i++;
    }
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << lcm(a,b)<< endl;

    return 0;
}


 */
