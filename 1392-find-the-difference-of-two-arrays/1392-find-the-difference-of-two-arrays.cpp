class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        map<int,bool> m1,m2;
        vector<int> temp;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]=true;
        }
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]=true;
        }
        for(auto p : m1){
            if(m2[p.first]==true){
                continue;
            }
            temp.push_back(p.first);
        }
        ans.push_back(temp);
        temp.clear();
        for(auto p: m2){
            if(m1[p.first]==true){
                continue;
            }
            temp.push_back(p.first);
        }
        ans.push_back(temp);
        return ans;
    }
};