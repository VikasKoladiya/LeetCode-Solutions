class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxi = 0;
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                continue;
            }
            if(nums[i-1]+1 == nums[i]){
                count++;
            }
            else{
                maxi = max(count,maxi);
                count = 0;
            }
        }
        maxi = max(maxi,count);
        return maxi+1;
    }
};