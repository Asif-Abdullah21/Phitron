#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=91408,i=4;

    int x = pow(10,i);
    int ans = (n/x)%10;

    cout << ans << endl;


    return 0;
}


