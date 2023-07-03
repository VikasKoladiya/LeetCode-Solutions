class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> M;
        int n=nums.size();
        
        int l=0,r=n-1;
        for(int i=0;i<n;i++)
        {
            if(M.count(target-nums[i]))
            {
                return {M[target-nums[i]],i};
            }
            
            M[nums[i]]=i;
        }
        
        return {-1,-1};
        
    }
};