class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size()-1;i++){
            int num = nums[i];
            if(num>9 && num<100){
                num/=10;
            }
            else if(num>99 && num<1000){
                num/=100;
            }
            else if(num>999 && num<10000){
                num/=1000;
            }
            for(int j=i+1;j<nums.size();j++){
                int a = min(num,nums[j]%10);
                int b = max(num,nums[j]%10);
                while(b!=0){
                    int temp = b;
                    b = a%b;
                    a = temp;
                }
                if(a==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};