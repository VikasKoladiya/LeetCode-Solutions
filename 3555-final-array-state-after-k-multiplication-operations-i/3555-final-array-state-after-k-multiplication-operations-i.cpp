class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int minindex = min_element(nums.begin(),nums.end())-nums.begin();
            nums[minindex]*=multiplier;
        }
        return nums;
    }
};