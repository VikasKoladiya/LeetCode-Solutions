// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i] == nums2[j]){
//                     if(ans.empty()){
//                         ans.push_back(nums1[i]);
//                     }
//                     else{
//                         auto it = find(ans.begin(),ans.end(),nums1[i]);
//                         if(it == ans.end()){
//                             ans.push_back(nums1[i]);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
       unordered_set<int> set1(nums1.begin(), nums1.end());
       unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> result;
        for (const auto& num : set1) {
            if (set2.find(num) != set2.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};