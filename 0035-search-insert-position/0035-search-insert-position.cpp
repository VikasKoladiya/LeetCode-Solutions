class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        int s = 0,mid;
        int e = nums.size()-1;
        while(s<e){
            mid = s + (e-s)/2;
            if(nums[mid]>=target)
                e=mid;
            else
                s=mid+1;
        }
        return s;
    }
};