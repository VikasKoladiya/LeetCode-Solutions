class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        bool flag = true;
        int ans = 0;
        for(auto &p:m){
            if(p.second > 1 && flag){
                ans = p.first;
                flag = false;
            }
            else if(p.second > 1 && !flag){
                ans ^= p.first;
            }
        }
        return ans;
    }
};