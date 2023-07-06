class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int answer = INT_MAX;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>= target && i<nums.size()){
                answer = min(answer,i-j+1);
                sum -= nums[j];
                j++;
            }
        }
        if(answer == INT_MAX){
            return 0;
        }
        else{
            return answer;
        }
    }
};