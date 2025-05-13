class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // Space -> O(n) && Time -> O(n)
        // vector<int> suffix(n,1);
        // vector<int> prefix(n,1);
        // for(int i=1;i<n;i++){
        //     prefix[i]=nums[i-1]*prefix[i-1];
        // }
        // for(int i=n-2;i>=0;i--){
        //     suffix[i]=nums[i+1]*suffix[i+1];
        // }
        // for(int i=0;i<n;i++){
        //     prefix[i]=prefix[i]*suffix[i];
        // }
        // return prefix;


        // Space -> O(1) && Time -> O(n)
        vector<int> suffix(n,1);
        int curr = nums[0];
        nums[0]=1;
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i+1]*suffix[i+1];
        }
        for(int i=1;i<n;i++){
            int temp1 = nums[i];
            nums[i]=curr;
            curr *= temp1;
        }
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*suffix[i];
        }
        return nums;
    }
};