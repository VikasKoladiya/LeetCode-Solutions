class Solution {
public:
    string largestOddNumber(string nums) {
        int n = nums.length(),count=0;
        string temp = "";
        temp += nums[n-1];
        string ans = "";
        if(stoi(temp)%2!=0){
            return nums;
        }
        int index = 0;
        temp="";
        for(int i=0;i<n;i++){
            temp+=nums[i];
            if(stoi(temp)%2!=0){
                index = i;
                count++;
            }
            temp = "";
        }
        if(count!=0 && index==0){
            ans+=nums[0];
            return ans;
        }
        else if(count==0){
            return "";
        }
        for(int i=0;i<=index;i++){
            ans+=nums[i];
        }
        return ans;
    }
};