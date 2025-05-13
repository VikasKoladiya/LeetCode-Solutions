class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0,count = 0;
        int n = nums.size();
        bool flag = false;
        if(nums[0]==0){
            count++;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==0 && nums[i-1]!=0){
                count++;
            }
            else if(nums[i]==0 && nums[i-1]==0){
                count++;
            }else{
                ans=ans+((count*(count+1))/2);
                count=0;
            }
        }
        if(count!=0){
            ans+=((count*(count+1))/2);
        }
        return ans;
    }
};