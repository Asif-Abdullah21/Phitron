#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem=0,i=1,ans=0;
    cout << "Enter a decimal number: ";
    cin >> n;


    while(n>0)
    {
        rem = n%2;
        ans = ans + (rem*i);

        n = n/2;
        i*=10;
    }

    cout << ans << endl;

    return 0;
}
