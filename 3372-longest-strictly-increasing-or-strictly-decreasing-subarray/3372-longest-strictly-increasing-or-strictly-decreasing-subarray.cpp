class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 0,counti=0,countd=0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                countd++;
                ans = max(ans,counti);
                counti = 0;
            }
            else if(nums[i]>nums[i-1]){
                counti++;
                ans = max(ans,countd);
                countd = 0;
            }
            else{
                ans = max(ans,max(countd,counti));
                countd = 0;
                counti = 0;
            }
        }
        ans = max(ans,max(countd,counti));
        ans++;
        return ans;
    }
};