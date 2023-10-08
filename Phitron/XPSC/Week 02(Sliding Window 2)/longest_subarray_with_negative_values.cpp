#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s; cin >> s;

    int i=0,j=0,mx=0,sum=0;

    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if(sum==s) cout << i+1 << " "; 

        if(mp.find(sum)==mp.end()) mp[sum] = i; //mp.find(sum)==mp.end() jodi paua na jay taile map a isnert krbe // duplicate sum asle map a insert krbo na cz first sum er index ta nile last theke besi boro kra jabe array ta

        if(sum>s) //negative value er khetre if(sum>s) baad diye vitorer code ta deya lgte pare// sum er s er cheye choto o hoite pare .. tokhono nicher conditon check deya lgte pare
        {
            if(mp.find(sum-s)!=mp.end()) // jodi map a paua jay then vitore dhukbe
            {
                cout << i << " - " << mp[sum-s] << " = " << i - mp[sum - s] << endl;
                //cout << i-mp[sum-s] << " ";
            }
        }

        // if(mp.find(sum)==mp.end()) mp[sum] = i; //upre diye kaj krtese, ekhane map a sum insert kra hocche with adress
    }
    
    
     
    return 0;
}

/*

//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long sum =0;
        int mx = 0;
        
        map<long long,int> mp;
        
        for(int i=0;i<N;i++)
        {
            sum += A[i];
            
            if(sum==K) mx = max(i+1,mx);
            
            if(mp.find(sum)==mp.end()) mp[sum] = i;
            
            if(mp.find(sum-K)!=mp.end())
            {
                mx = max(i-mp[sum-K],mx);
            }
            
        
        }
        
        return mx;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


*/

/*


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s; cin >> s;

    int i=0,j=0,mx=0,sum=0;

    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if(sum==s)
        {
             cout << i+1 << " ";
             mx = max(mx,i+1);
        }

        if(mp.find(sum)==mp.end()) mp[sum] = i;

        if(sum>s)
        {
            if(mp.find(sum-s)!=mp.end())
            {
                cout << i << " - " << mp[sum-s] << " = " << i - mp[sum - s] << endl;
                //cout << i-mp[sum-s] << " ";

                mx = max(mx,i-mp[sum-s]);
            }
        }
    }
    

    cout <<"\nMax size subarray of sum s is: " << mx << endl;
    
    
     
    return 0;
}




*/