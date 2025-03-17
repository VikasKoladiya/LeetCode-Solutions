class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto &p:m){
            if(p.second%2!=0){
                return false;
            }
        }
        return true;
    }
};