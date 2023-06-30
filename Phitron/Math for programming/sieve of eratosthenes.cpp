#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 100000;
    int seive[n]={0};
    seive[1]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(seive[i]==0)
        {
            for(int j=i+i;j<=n; j+=i)
            {
                seive[j] = 1;
            }
        }
    }

    int value;
    while(cin >> value)
    {
        if(seive[value]) cout << "Not prime\n"<< endl;
        else cout << "Prime\n";
    }



    return 0;
}


