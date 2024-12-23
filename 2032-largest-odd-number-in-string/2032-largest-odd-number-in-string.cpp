class Solution {
public:
    string largestOddNumber(string nums) {
        int n = nums.length();
        int i = n-1;
        while(i>=0){
            if((nums[i]-'0')%2!=0){
                return nums.substr(0,i+1);
            }
            i--;
        }
        return "";
    }
};