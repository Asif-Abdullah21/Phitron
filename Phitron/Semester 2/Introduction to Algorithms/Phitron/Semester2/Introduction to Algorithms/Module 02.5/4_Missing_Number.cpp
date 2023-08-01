class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int val;

        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums[i]){
                val = nums[i]-1;
                break;
            }
        }
        return val;
    }
};











/*
masud:

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                break;
            }
        }
        return i;
    }
};


*/