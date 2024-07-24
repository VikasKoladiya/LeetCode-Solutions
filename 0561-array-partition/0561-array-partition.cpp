class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(),nums.end());
        sum += min(nums[0],nums[1]);
        for(int i=2;i<n;i+=2){
            sum+=min(nums[i],nums[i+1]);
        }
        return sum;
    }
};