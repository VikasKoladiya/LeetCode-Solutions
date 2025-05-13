class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        int mini = nums[0];
        int n = nums.size();
        vector<int> v(n);
        int maxi = INT32_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>maxi){
                maxi = nums[i];
                v[i]=maxi;
            }else{
                v[i] = maxi; 
            }
        }
        for(int i=1;i<n-1;i++){
            if(mini<nums[i] && nums[i]<v[i+1]){
                return true;
            }else{
                if(nums[i]<mini){
                    mini = nums[i];
                }
            }
        }
        return false;
    }
};