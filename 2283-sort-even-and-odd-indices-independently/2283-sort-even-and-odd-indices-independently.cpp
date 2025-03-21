class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> v1,v2;
        for(int i=0;i<nums.size();i++){
            if(i%2){
                v1.push_back(nums[i]);
            }
            else{
                v2.push_back(nums[i]);
            }
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.begin(),v2.end());
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2){
                nums[i]=v1[j++];
            }
            else{
                nums[i]=v2[k++];
            }
        }
        return nums;
    }
};