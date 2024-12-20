class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                int idx = i;

                for(int j=i+1; j<n; j++){
                    if(nums[j] > nums[i-1]){
                        if(nums[j] < nums[idx]){
                            idx = j;
                        }
                    }
                }

                swap(nums[i-1], nums[idx]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};