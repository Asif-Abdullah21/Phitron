class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int mn=0,mx=0;
        for(int v:nums)
        {
            if(v<0) mn++;
            else if(v>0) mx++;
        }

        return max(mn,mx);
    }
};