class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        int count = 0;
        if(nums.size()==1 && nums[0]==target){
            return {0,0};
        }
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
                if(j>=2){
                    ans[1]=i;
                    continue;
                }
                ans[j++] = i;
            }
        }
        if(count == 1){
            return {ans[0],ans[0]};
        }
        return ans;
    }
};