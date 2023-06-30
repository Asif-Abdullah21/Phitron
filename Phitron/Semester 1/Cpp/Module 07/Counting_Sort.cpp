#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    int freq[26] ={0};
    char ch;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        freq[ch-'a']++;//freq[ch-97]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if(freq[i-'a']>0)
        {
            for (int j = 0; j < freq[i-'a']; j++)
            {
                cout << i ;
            } 
        }
    }
    
    
     
    return 0;
}
