#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1101;
    int ans =0;
    int i=0;
    int rem;


    while(a>0)
    {
        rem=a%10;
        ans = ans + rem*(pow(2,i));

        a=a/10;
        i++;
    }

    cout << ans << endl;

    return 0;
}
