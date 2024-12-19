class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int> neg;
        int n = nums.size(),idx1=0,idx2=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                posi.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=posi[idx1++];
            }
            else{
                nums[i]=neg[idx2++];
            }
        }
        return nums;
    }
};