class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        // vector<int> dp(n+1);
        // dp[0] = dp[1] = 1;
        int prev1 = 1;
        int prev2 = 1;
        
        for (int i = 2; i <= n; i++) {
            // dp[i] = dp[i-1] + dp[i-2];
            int curr = prev1 + prev2;

            prev2 = prev1;
            prev1 = curr;
        }
        // return dp[n];
        return prev1;
    }
};