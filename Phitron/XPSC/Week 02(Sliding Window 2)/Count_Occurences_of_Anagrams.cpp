//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    int k = p.size();
	    
	    int freqP[26] = {0};
	    
	    for(auto ch:p) freqP[ch-'a']++;
	    
	    int i=0,j=0,cnt=0;
	    
	    int freqS[26] = {0};
	    
	    while(j<s.size())
	    {
	        freqS[s[j]-'a']++;
	        
	        if(j>=k-1)
	        {
	            bool flag = true;
	            
	            for(int c=0;c<26;c++)
	            {
	                if(freqP[c]!=freqS[c])
	                {
	                    flag = false;
	                    break;
	                }
	            }
	            
	            if(flag) cnt++;
	            freqS[s[i]-'a']--;
	            i++;
	            
	        }
	        
	        j++;
	    }
	    
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends