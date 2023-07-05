class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans11 = 0, ans22 = 0, n= nums.size();
        for(int i=0; i<n; i++){
            ans11^=i;
            ans22^=nums[i];
        }
        return (ans11^n)^ans22;
    }
};