class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int m=s+(e-s)/2;
        if(target>nums[nums.size()-1])return nums.size();
        while(s<e)
        {
            if(nums[m]>=target)
                e=m;
            else
               s=m+1;
            m=s+(e-s)/2;
        }
        return s;
    }
};