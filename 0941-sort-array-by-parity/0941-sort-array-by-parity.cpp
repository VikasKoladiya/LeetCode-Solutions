class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> answer(nums.size());
        int s=0,e=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                answer[s++]=nums[i];
            }
            else{
                answer[e--]=nums[i];
            }
        }
        return answer;
    }
  
};