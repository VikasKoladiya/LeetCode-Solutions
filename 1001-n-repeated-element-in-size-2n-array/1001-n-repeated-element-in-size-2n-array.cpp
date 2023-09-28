class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> v(10001);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        int max = *max_element(nums.begin(),nums.end());
        int maxi = INT32_MIN;
        int ans;
        for(int i=0;i<=max;i++){
            if(v[i]>maxi){
                maxi = v[i];
                ans=i;
            }
        }
        return ans;
    }
};