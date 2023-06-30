#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0;
    int n;
    cin >> n;

    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) cnt++;

    if(sqrt(n)*sqrt(n)==n) cout << (2*cnt)+1 << endl;//cz 9= 1*9,3*3, erkomom perfect sqr(purnoborgo) number a ek songkha duibar ase, tokhon ekta cnt krlm
    else cout << (2*cnt)+2 << endl;

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=2;
    int n;
    cin >> n;

    for(int i=2;i<=n/2;i++)
        if(n%i==0) cnt++;

    cout << cnt << endl;

    return 0;
}

*/
