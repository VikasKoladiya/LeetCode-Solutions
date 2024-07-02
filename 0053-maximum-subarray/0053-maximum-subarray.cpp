class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsumTillNow = INT_MIN;
        for(auto ele:nums){
            currsum += ele;
            maxsumTillNow = max(maxsumTillNow,currsum);
            if(currsum < 0) currsum = 0;
        }
        return maxsumTillNow;
    }
};