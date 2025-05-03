class Solution {
public:
    // top-down approach
    int solve(vector<int> cost,int n,vector<int> &dp){
        // Base case
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }

        // dp return case
        if(dp[n] != -1){
            return dp[n];
        }

        // step there dp memoization
        dp[n] = cost[n] + min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }

    // bottome-up approach - Tabulation
    int solve2(vector<int> cost, int n){
        vector<int> dp(n+1);
         dp[0]=cost[0];
         dp[1]=cost[1];

         for(int i=2;i<n;i++){
            dp[i]=cost[i] + min(dp[i-1],dp[i-2]);
         }

         return min(dp[n-1],dp[n-2]);
    }

    // Space Optimization
    int solve3(vector<int> cost,int n){
         int prev1=cost[0];
         int prev2=cost[1];

         for(int i=2;i<n;i++){
            int curr = cost[i] + min(prev1,prev2);
            prev1 = prev2;
            prev2 = curr;
         }

         return min(prev1,prev2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);

        // int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        // int ans = solve2(cost,n);

        int ans = solve3(cost,n);
        return ans;
    }
};