#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s1,s2;
        cin>> s1 >> s2;

        while(s1.find(s2) !=-1)
        {
            s1.replace(s1.find(s2),s2.size(),"$");
        }

         cout << s1 << endl;
    }

   
    
     
    return 0;
}
