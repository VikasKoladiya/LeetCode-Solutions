class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int sum = 0;
        long long lsum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            lsum+=nums[i];
            if(sum==lsum){
                return i;
            }
            sum-=nums[i];
        }
        return -1;
    }
};