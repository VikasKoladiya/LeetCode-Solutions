class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    if(ans.empty()){
                        ans.push_back(nums1[i]);
                    }
                    else{
                        auto it = find(ans.begin(),ans.end(),nums1[i]);
                        if(it == ans.end()){
                            ans.push_back(nums1[i]);
                        }
                    }
                }
            }
        }
        return ans;
    }
};