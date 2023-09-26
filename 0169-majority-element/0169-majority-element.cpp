#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        long long int maxkey = -10000000000;
        int maxvalue = INT32_MIN;
        for(const auto&pair : m){
            if(pair.second>maxvalue){
                maxkey = pair.first;
                maxvalue = pair.second;
            }
        }
        return maxkey;
    }
};