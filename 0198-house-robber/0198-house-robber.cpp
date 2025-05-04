class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        long long int prev2 = 0;
        long long int prev1 = nums[0];

        for(int i=1;i<n;i++){
            long long int inc = prev2 + nums[i];
            long long int exc = prev1 + 0;

            int ans = max(inc,exc);
            prev2 = prev1;
            prev1 = ans;
        }

        return prev1;
    }
};