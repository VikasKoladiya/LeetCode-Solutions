class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            max1 = max(max1,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(max1!=nums[i]){
                max2 = max(max2,nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(max1!=nums[i] && max2!=nums[i]){
                flag = true;
                max3 = max(max3,nums[i]);
            }
        }
        if(flag){
            return max3;
        }
        return max1;
    }
};