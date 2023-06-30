#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)//O(N)
    {
        int x=i;
        while(x>0)                        //Phitron - Rahat Khan Pathan vai
        {
            int digit=x%10;
            cout<<digit<<" ";  //O(log(N))
            x/=10;
        }
        cout<<endl;   //final complexity : O(Nlog(N))
    }
    return 0;
}