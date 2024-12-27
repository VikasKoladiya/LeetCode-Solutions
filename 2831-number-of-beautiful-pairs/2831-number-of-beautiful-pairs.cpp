class Solution {
public:
    int gcd(int a,int b){
        return b==0 ? a: gcd(b,a%b);
    }
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(gcd(to_string(nums[i])[0]-'0',nums[j]%10)==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};