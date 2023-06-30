#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) // O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // } 

    //vag akare komle ba gunitok akare barle O(logN) e kaj kre

    for(int i=1;i<=n;i=i*2) // O(logN) 
    {
        cout<<i<<endl;    //Phitron - Rahat Khan Pathan vai
    }
    return 0;
}