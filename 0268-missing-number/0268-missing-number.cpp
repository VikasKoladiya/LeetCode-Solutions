class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0, n= nums.size();
        for(int i=0; i<n; i++){
            ans+=nums[i];
        }
        return ((n*(n+1))/2)-ans;
    }
};